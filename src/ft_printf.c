/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 13:50:14 by dpiza             #+#    #+#             */
/*   Updated: 2021/08/28 16:05:46 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*form_string(va_list args, t_flags flags)
{
	char	*ret;

	if (flags.specifier == 'c')
		ret = c_format_string(args, flags);
	else if (flags.specifier == 's')
		ret = s_format_string(args, flags);
	else if (flags.specifier == 'p')
		ret = p_format_string(args, flags);
	else if (flags.specifier == 'd' || flags.specifier == 'i')
		ret = d_format_string(args, flags);
	else if (flags.specifier == 'u')
		ret = d_format_string(args, flags);
	else if (flags.specifier == 'x' || flags.specifier == 'X')
		ret = x_format_string(args, flags);
	else if (flags.specifier == '%')
		ret = ft_strdup("%");
	else
		ret = NULL;
	return (ret);
}

void	print_flags(t_flags *flags)
{
	ft_putstr_fd("\nparams: ", 1);
	ft_putstr_fd(flags->params, 1);
	ft_putstr_fd("\njustify: ", 1);
	ft_putnbr_fd(flags->justify, 1);
	ft_putstr_fd("\ninvisible_plus: ", 1);
	ft_putnbr_fd(flags->invisible_plus, 1);
	ft_putstr_fd("\nplus: ", 1);
	ft_putnbr_fd(flags->plus, 1);
	ft_putstr_fd("\nprecision: ", 1);
	ft_putnbr_fd(flags->precision, 1);
	ft_putstr_fd("\nprecision_n: ", 1);
	ft_putnbr_fd(flags->precision_n, 1);
	ft_putstr_fd("\nwidth: ", 1);
	ft_putnbr_fd(flags->width, 1);
	ft_putstr_fd("\nzero_x: ", 1);
	ft_putnbr_fd(flags->zero_x, 1);
	ft_putstr_fd("\nzerofill: ", 1);
	ft_putnbr_fd(flags->zerofill, 1);
	ft_putstr_fd("\nspecifier: ", 1);
	ft_putchar_fd(flags->specifier, 1);
	ft_putstr_fd("\nparams_length: ", 1);
	ft_putnbr_fd(flags->params_length, 1);
	ft_putstr_fd("\n", 1);
}

int	format_handler(const char **s, va_list args, int *i)
{
	char	*ret;
	t_flags	flags;

	flags = flag_parse(*s);
	if (flags.specifier == 'E')
		return (-1);
	ret = form_string(args, flags);
	if (!ret)
		return (flags.params_length);
	*i += ft_strlen(ret);
	if (flags.specifier != 'c')
		ft_putstr_fd(ret, 1);
	// if (flags.specifier != '%')
	// 	print_flags(&flags);
	free (ret);
	free(flags.params);
	return (flags.params_length);
}

int	ft_printf(const char *arr, ...)
{
	va_list	args;
	int		i;
	int		ret;

	i = 0;
	va_start(args, arr);
	while (*arr)
	{
		if (*arr == '%')
		{
			arr++;
			ret = format_handler(&arr, args, &i);
			if (ret < 0)
				return (-1);
			arr += ret;
		}
		else
		{
			ft_putchar_fd(*arr, 1);
			i++;
			arr++;
		}
	}
	va_end(args);
	return (i);
}
