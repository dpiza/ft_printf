/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:49:43 by dpiza             #+#    #+#             */
/*   Updated: 2021/08/19 19:14:17 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*c_format_string(va_list args, t_flags flags)
{
	char	*ret;
	char	*str;
	int		size;
	int		just;

	str = ft_strdup("");
	add_char(&str, va_arg(args, int));
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

char	*s_format_string(va_list args, t_flags flags)
{
	char	*ret;
	char	*str;
	int		size;
	int		just;

	str = ft_strdup(va_arg(args, char *));
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

	base = "0123456789abcdef";
	str = ft_nbr_base((unsigned long long)va_arg(args, char *), base);
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

	base_s = "0123456789abcdef";
	base_l = "0123456789ABCDEF";
	if (flags.specifier == 'x')
		str = ft_nbr_base((unsigned long long)va_arg(args, char *), base_s);
	else
		str = ft_nbr_base((unsigned long long)va_arg(args, char *), base_l);
	if (flags.zero_x && flags.specifier == 'x')
		ret = ft_strjoin("0x", str);
	else if (flags.zero_x)
		ret = ft_strjoin("0X", str);
	else
		ret = ft_strdup(str);
	free (str);
	return (ret);
}
