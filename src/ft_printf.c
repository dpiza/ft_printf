/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 13:50:14 by dpiza             #+#    #+#             */
/*   Updated: 2021/08/13 15:45:17 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_flag(char c, va_list args)
{
	if (c == 'c')								// %c print a single character.
		ft_putchar_fd(va_arg(args, int), 1);
	else if (c == 's')							// %s print a string of characters.
		ft_putstr_fd(va_arg(args, char*), 1);
	else if (c == 'p')							// %p The void * pointer argument is printed in hexadecimal.
	{
		ft_putstr_fd("0x", 1);
		ft_putnbr_base((unsigned long long)va_arg(args, char*), "0123456789abcdef");
	}
	else if (c == 'd' || c == 'i')				// %d print a decimal (base 10) number. • %i print an integer in base 10.
		ft_putnbr_base(va_arg(args, int), "0123456789");
	else if (c == 'u')							// %u print an unsigned decimal (base 10) number
		ft_putnbr_base((long)va_arg(args, unsigned int), "0123456789");
	else if (c == 'x')							// %x print a number in hexadecimal (base 16).
		ft_putnbr_base(va_arg(args, long), "0123456789abcdef");
	else if (c == 'X')							// %x print a number in hexadecimal (base 16).
		ft_putnbr_base(va_arg(args, long), "0123456789ABCDEF");
	else if (c == '%')							// %% print a percent sign
		ft_putchar_fd('%', 1);
}

int	ft_printf(const char *arr, ...)
{
	va_list args;
	int	i;
	
	i = 0;
	va_start(args, arr);
	while (*arr)
	{
		if (*arr == '%')
		{
			arr++;
			i++;
			check_flag(*arr, args);
		}
		else
		{
			ft_putchar_fd(*arr, 1);
			i++;
		}
		arr++;
	}
	return (i);
}
