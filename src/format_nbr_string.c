/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_nbr_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:03:12 by dpiza             #+#    #+#             */
/*   Updated: 2021/09/03 16:59:53 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	fill_sign(t_flags flags, char **str)
{
	char	*ret;

	if (flags.invisible_plus && *str[0] != '-')
		ret = ft_strjoin(" ", *str);
	else if (flags.plus && *str[0] != '-')
		ret = ft_strjoin("+", *str);
	else
		ret = ft_strdup(*str);
	free (*str);
	*str = ret;
}

char	*format_nbr_width(char *str, t_flags flags)
{
	int		size;
	int		str_len;
	char	*ret;

	size = flags.width;
	str_len = ft_strlen(str);
	if (size <= str_len)
		return (ft_strdup(str));
	ret = ft_calloc ((size + 1), sizeof(char));
	ft_memset(ret, flags.zerofill, size);
	ft_memcpy(ret + ((!flags.justify) * (size - str_len)), str, str_len);
	if (*str && !ft_isdigit(*str) && flags.zerofill == 48)
	{
		ret[0] = str[0];
		ret[ft_strlen(ret) - ft_strlen(str)] = flags.zerofill;
	}
	return (ret);
}

char	*format_nbr_precision(char *str, t_flags flags)
{
	int		size;
	int		str_len;
	char	*ret;

	str_len = ft_strlen(str);
	if (flags.precision_n < str_len
		|| (flags.precision_n < (str_len - 1) && !ft_isdigit(*str)))
		return (ft_strdup(str));
	size = str_len;
	if (flags.precision_n > str_len)
		size = flags.precision_n;
	if (*str == '-')
		size += 1;
	ret = ft_calloc((size + 1), sizeof(char));
	ft_memset(ret, 48, size);
	ft_memcpy(ret + (size - str_len), str, str_len);
	if (*str == '-')
	{
		ret[0] = str[0];
		ret[size - str_len] = 48;
	}
	return (ret);
}

char	*d_format_string(va_list args, t_flags flags)
{
	char	*str;
	char	*tmp;
	char	*ret;

	if (flags.specifier == 'u')
		str = ft_itoa(va_arg(args, unsigned int));
	else
		str = ft_itoa(va_arg(args, int));
	if (*str == '0' && ft_strlen(str) == 1 && flags.precision)
		*str = 0;
	fill_sign(flags, &str);
	tmp = format_nbr_precision(str, flags);
	ret = format_nbr_width(tmp, flags);
	free (str);
	free (tmp);
	return (ret);
}
