/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 13:50:14 by dpiza             #+#    #+#             */
/*   Updated: 2021/08/12 20:13:21 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_printf(const char *arr, ...)
{
	va_list args;
	
	va_start(args, arr);
	while (*arr)
	{
		if (*arr == '%')
		{
			arr++;
			if (*arr == 'c')								// %c print a single character.
				ft_putchar_fd(va_arg(args, int), 1);
			else if (*arr == 's')							// %s print a string of characters.
				ft_putstr_fd(va_arg(args, char*), 1);
			else if (*arr == 'p')							// %p The void * pointer argument is printed in hexadecimal.
			{
				ft_putstr_fd("0x", 1);
				ft_putnbr_base((unsigned long long)va_arg(args, char*), "0123456789abcdef"); // Todo
			}
			else if (*arr == 'd' || *arr == 'i')			// %d print a decimal (base 10) number. • %i print an integer in base 10.
				ft_putnbr_base(va_arg(args, int), "0123456789");
			else if (*arr == 'u')							// %u print an unsigned decimal (base 10) number
				ft_putnbr_base((long)va_arg(args, unsigned int), "0123456789");
			else if (*arr == 'x')							// %x print a number in hexadecimal (base 16).
				ft_putnbr_base(va_arg(args, long), "0123456789abcdef");
			else if (*arr == 'X')							// %x print a number in hexadecimal (base 16).
				ft_putnbr_base(va_arg(args, long), "0123456789ABCDEF");
			else if (*arr == '%')							// %% print a percent sign
				ft_putchar_fd('%', 1);
		}
		else
			ft_putchar_fd(*arr, 1);
		arr++;
	}
	return (0);
}
