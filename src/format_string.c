/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:49:43 by dpiza             #+#    #+#             */
/*   Updated: 2021/08/23 13:05:31 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	int		size;
	int		just;

	str = ft_strdup(va_arg(args, char *));
	if (!str)
		return (ft_strdup("(null)"));
	just = 0;
	if (ft_strlen(str) >= (unsigned int)flags.width)
		size = ft_strlen(str);
	else
		size = flags.width;
	ret = malloc ((size + 1) * sizeof(char));
	ft_memset(ret, 32, size);
	if (!flags.justify)
		just = 1;
	ft_memcpy(ret + (just * (size - ft_strlen(str))), str, ft_strlen(str));
	ret[size] = '\0';
	free (str);
	return (ret);
}

char	*p_format_string(va_list args, t_flags flags)
{
	char	*ret;
	char	*str;
	char	*tmp;
	char	*base;
	char	*arg;

	base = "0123456789abcdef";
	arg = va_arg(args, char *);
	// ft_putnbr_fd((unsigned long long)arg, 1);
	if (!arg)
		return (ft_strdup(NULL_POINTER));
	str = ft_ullnbr_base((unsigned long long)arg, base);
	if (flags.specifier == 'p')
		tmp = ft_strdup("0x");
	ret = ft_strjoin(tmp, str);
	free (tmp);
	free (str);
	return (ret);
}

char	*x_format_string(va_list args, t_flags flags)
{
	char	*ret;
	char	*str;
	char	*base_s;
	char	*base_l;
	unsigned long lint;

	base_s = "0123456789abcdef";
	base_l = "0123456789ABCDEF";
	lint = va_arg(args, unsigned long);
	// ft_putnbr_fd(lint, 1);
	if (lint == 0)
		return (ft_strdup("0"));
	if (flags.specifier == 'x')
		str = ft_nbr_base(lint, base_s);
	else
		str = ft_nbr_base(lint, base_l);
	if (flags.zero_x && flags.specifier == 'x')
		ret = ft_strjoin("0x", str);
	else if (flags.zero_x)
		ret = ft_strjoin("0X", str);
	else
		ret = ft_strdup(str);
	free (str);
	return (ret);
}
