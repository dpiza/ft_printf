/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_parse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:21:56 by dpiza             #+#    #+#             */
/*   Updated: 2021/08/19 19:59:20 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_flag(char c, t_flags *flags)
{
	if (c == '-')
		flags->justify = TRUE;
	else if (c == '0' && flags->width == FALSE)
		flags->zerofill = 48;
	else if (c == '+')
		flags->plus = TRUE;
	else if (c == ' ')
		flags->invisible_plus = TRUE;
	else if (c == '#')
		flags->zero_x = TRUE;
	else
		return (0);
	return (1);
}

int	is_precision(char c, t_flags *flags)
{
	if (c == '.')
		flags->precision = TRUE;
	else if (ft_isdigit(c) && flags->precision == TRUE)
		flags->precision = c - 48;
	else if (ft_isdigit(c) && flags->precision != TRUE)
	{
		if (flags->width == 0)
			flags->width = c - 48;
		else
			flags->width = (flags->width * 10) + (c - 48);
	}
	else
		return (0);
	return (1);
}

void	init_struct(t_flags *flags)
{
	flags->justify = 0;
	flags->invisible_plus = 0;
	flags->plus = 0;
	flags->width = 0;
	flags->zero_x = 0;
	flags->zerofill = 32;
	flags->precision = 0;
	flags->specifier = 0;
	flags->params_length = 0;
	flags->params = ft_strdup("%");
}

t_flags	flag_parse(const char *s)
{
	int		i;
	int		space;
	t_flags	flags;

	i = 0;
	space = 0;
	init_struct(&flags);
	while (is_flag(s[i], &flags) || is_precision(s[i], &flags))
	{
		add_char(&flags.params, s[i]);
		if (s[i] == ' ')
		{
			if (space > 0)
				break ;
			space = 1;
		}
		i++;
	}
	flags.specifier = s[i];
	add_char(&flags.params, s[i]);
	flags.params_length = i + 1;
	return (flags);
}
