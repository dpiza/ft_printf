/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_hex_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:17:22 by dpiza             #+#    #+#             */
/*   Updated: 2021/09/01 20:47:53 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*format_hex_width(char *str, t_flags flags)
{
	int		size;
	char	*ret;
	int		str_len;

	str_len = ft_strlen(str);
	if (str_len >= flags.width)
		size = str_len;
	else
		size = flags.width;
	ret = ft_calloc((size + 1), sizeof(char));
	ft_memset(ret, flags.zerofill, size);
	ft_memcpy(ret + ((!flags.justify) * (size - str_len)), str, str_len);
	ret[size] = '\0';
	return (ret);
}

char	*format_hex_precision(char *str, t_flags flags)
{
	int		size;
	int		str_len;
	char	*ret;

	if (!flags.precision)
		return (ft_strdup(str));
	str_len = ft_strlen(str);
	size = str_len;
	if (flags.precision && flags.precision_n > str_len)
		size = flags.precision_n;
	ret = ft_calloc((size + 1), sizeof(char));
	ft_memset(ret, 48, size);
	ft_memcpy(ret + (size - str_len), str, str_len);
	return (ret);
}

char	*x_format_string(va_list args, t_flags flags)
{
	char			*str;
	char			*prec;
	char			*tmp;
	char			*ret;
	unsigned long	lint;

	lint = va_arg(args, unsigned long);
	if (lint == 0 && flags.precision && !flags.precision_n)
		str = ft_strdup("");
	else if (flags.specifier == 'x')
		str = ft_nbr_base(lint, "0123456789abcdef");
	else
		str = ft_nbr_base(lint, "0123456789ABCDEF");
	prec = format_hex_precision(str, flags);
	if (flags.zero_x && flags.specifier == 'x' && lint)
		tmp = ft_strjoin("0x", prec);
	else if (flags.zero_x && lint)
		tmp = ft_strjoin("0X", prec);
	else
		tmp = ft_strdup(prec);
	ret = format_hex_width(tmp, flags);
	free (str);
	free (prec);
	free (tmp);
	return (ret);
}

char	*p_format_string(va_list args, t_flags flags)
{
	char	*arg;
	char	*str;
	char	*prec;
	char	*tmp;
	char	*ret;

	arg = va_arg(args, char *);
	if (!arg)
		str = ft_strdup("0");
	else
		str = ft_ullnbr_base((unsigned long long)arg, "0123456789abcdef");
	prec = format_hex_precision(str, flags);
	tmp = ft_strjoin("0x", prec);
	ret = format_hex_width(tmp, flags);
	free (prec);
	free (tmp);
	free (str);
	return (ret);
}
