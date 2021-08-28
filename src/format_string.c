/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:49:43 by dpiza             #+#    #+#             */
/*   Updated: 2021/08/26 14:14:44 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*format_string(char *str, t_flags flags)
{
	int	size;
	char	*ret;

	if (ft_strlen(str) >= (unsigned int)flags.width)
		size = ft_strlen(str);
	else
		size = flags.width;
	ret = malloc ((size + 1) * sizeof(char));
	ft_memset(ret, 32, size);
	ft_memcpy(ret + ((!flags.justify) * (size - ft_strlen(str))), str, ft_strlen(str));
	ret[size] = '\0';
	return (ret);
}

char	*c_format_string(va_list args, t_flags flags)
{
	char	*ret;
	int		size;
	int		i;
	char	c;

	c = va_arg(args, int);
	size = 1;
	i = 0;
	if (flags.width > 1)
		size = flags.width;
	ret = malloc ((size + 1) * sizeof(char));
	ft_memset(ret, 32, size);
	ret[((!flags.justify) * (size - 1))] = c;
	ret[size] = '\0';
	while (i < size)
	{
		ft_putchar_fd(ret[i], 1);
		i++;
	}
	if (c == '\0')
		ret[((!flags.justify) * (size - 1))] = '0';
	return (ret);
}

char	*s_format_string(va_list args, t_flags flags)
{
	char	*ret;
	char	*str;
	// int		size;

	str = ft_strdup(va_arg(args, char *));
	if (!str)
		str = ft_strdup("(null)");
	ret = format_string(str, flags);
	if (flags.precision && flags.precision_n < (int)ft_strlen(ret))
		ret[flags.precision_n]	= '\0';
	free (str);
	return (ret);
}

char	*p_format_string(va_list args, t_flags flags)
{
	char	*ret;
	char	*str;
	char	*tmp;
	char	*arg;
	// int		size;

	arg = va_arg(args, char *);
	tmp = ft_ullnbr_base((unsigned long long)arg, "0123456789abcdef");
	if (arg)
		str = ft_strjoin("0x", tmp);
	else
		str = ft_strdup(NULL_POINTER);
	// if (ft_strlen(str) >= (unsigned int)flags.width)
	// 	size = ft_strlen(str);
	// else
	// 	size = flags.width;
	// ret = malloc ((size + 1) * sizeof(char));
	// ft_memset(ret, 32, size);
	// ft_memcpy(ret + ((!flags.justify) * (size - ft_strlen(str))), str, ft_strlen(str));
	// ret[size] = '\0';
	ret = format_string(str, flags);
	free (tmp);
	free (str);
	return (ret);
}

char	*x_format_string(va_list args, t_flags flags)
{
	char	*ret;
	char	*str;
	char	*tmp;
	unsigned long lint;

	lint = va_arg(args, unsigned long);
	if (lint == 0)
		return (ft_strdup("0"));
	if (flags.specifier == 'x')
		str = ft_nbr_base(lint, "0123456789abcdef");
	else
		str = ft_nbr_base(lint, "0123456789ABCDEF");
	if (flags.zero_x && flags.specifier == 'x')
		tmp = ft_strjoin("0x", str);
	else if (flags.zero_x)
		tmp = ft_strjoin("0X", str);
	else
		tmp = ft_strdup(str);
	ret = format_string(str, flags);
	free (tmp);
	free (str);
	return (ret);
}
