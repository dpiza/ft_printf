/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_nbr_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:03:12 by dpiza             #+#    #+#             */
/*   Updated: 2021/08/19 20:43:42 by dpiza            ###   ########.fr       */
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

void	fix_sign(t_flags flags, char *str, char *ret, int n)
{
	if (!ft_isdigit(*str) && flags.zerofill == 48 && n > 0)
	{
		ret[0] = str[0];
		ret[n] = flags.zerofill;
	}
}

char	*d_format_string(va_list args, t_flags flags)
{
	char	*ret;
	char	*str;
	int		size;
	int		str_len;

	if (flags.specifier == 'u')
		str = ft_itoa(va_arg(args, unsigned int));
	else
		str = ft_itoa(va_arg(args, int));
	fill_sign(flags, &str);
	str_len = ft_strlen(str);
	size = flags.width;
	if (flags.width < str_len)
		size = str_len;
	ret = ft_calloc ((size + 1), sizeof(char));
	ft_memset(ret, flags.zerofill, size);
	ft_memcpy(ret + ((!flags.justify) * (size - str_len)), str, str_len);
	fix_sign(flags, str, ret, size - str_len);
	free (str);
	return (ret);
}
