/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_nbr_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:03:12 by dpiza             #+#    #+#             */
/*   Updated: 2021/08/28 16:07:01 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	fill_sign(t_flags flags, char **nbr)
{
	char	*ret;

	if (flags.invisible_plus && *nbr[0] != '-')
		ret = ft_strjoin(" ", *nbr);
	else if (flags.plus && *nbr[0] != '-')
		ret = ft_strjoin("+", *nbr);
	else
		ret = ft_strdup(*nbr);
	free (*nbr);
	*nbr = ret;
}

void	fix_sign(t_flags flags, char *str, char **ret, int n)
{
	char	*tmp;

	if (*str && !ft_isdigit(*str) && flags.zerofill == 48 && n > 0)
	{
		ret[0][0] = str[0];
		ret[0][n] = flags.zerofill;
	}
	else if (*str && !ft_isdigit(*str)
		&& n == (flags.precision_n - (int)ft_strlen(str)))
	{
		tmp = ft_strjoin("-",*ret);
		free (*ret);
		tmp[n + 1] = 48;
		*ret = tmp;
	}
	else if (*str && !ft_isdigit(*str) && flags.zerofill == 32 && n > 0
			&& flags.precision_n < flags.width
			&& flags.precision_n >= (int)ft_strlen(str))
	{
		ret[0][flags.width - flags.precision_n - 1] = str[0];
		ret[0][n] = 48;
	}
}

char	*format_nbr_precision(char **str, t_flags flags)
{
	int		size;
	int		str_len;
	char	*ret;
	
	str_len = ft_strlen(*str);
	if (flags.precision_n < str_len && **str == '-')
	{
		ret = ft_strdup(*str);
		return (ret);
	}
	size = str_len;
	if (flags.precision_n > str_len)
		size = flags.precision_n;
	if (**str == '-')
		size += 1;
	ret = ft_calloc((size + 1), sizeof(char));
	ft_memset(ret, 48, size);
	ft_memcpy(ret + (size - str_len), *str, str_len);
	if (**str == '-')
	{
		ret[0] = str[0][0];
		ret[size - ft_strlen(*str)] = 48;
	}
	return (ret);
}

void	format_nbr_string(char **str, t_flags flags)
{
	int		size;
	int		str_len;
	char	*ret;
	
	size = flags.width;
	str_len = ft_strlen(*str);
	if (size <= flags.precision_n || size <= str_len)
		return ;
	ret = ft_calloc ((size + 1), sizeof(char));
	ft_memset(ret, flags.zerofill, size);
	ft_memcpy(ret + ((!flags.justify) * (size - str_len)), *str, str_len);
	free (*str);
	*str = ret;	
}

char	*d_format_string(va_list args, t_flags flags)
{
	char	*ret;
	char	*str;

	if (flags.specifier == 'u')
		str = ft_itoa(va_arg(args, unsigned int));
	else
		str = ft_itoa(va_arg(args, int));
	if (*str == '0' && ft_strlen(str) == 1 && flags.precision)
		*str = 0;

	fill_sign(flags, &str);
	
	ret = format_nbr_precision(&str, flags);
	
	format_nbr_string(&ret, flags);
	if (flags.width > flags.precision_n)
		fix_sign(flags, str, &ret, ft_strlen(ret));
	free (str);
	return (ret);
}
