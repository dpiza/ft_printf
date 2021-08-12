/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 13:50:14 by dpiza             #+#    #+#             */
/*   Updated: 2021/08/12 19:33:37 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

const char g_hex_map[16] = "0123456789abcdef";

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

void	ft_print_hex_address(unsigned char *str)
{
	char hex[2];
	int	i;
	
	i = 1;
	ft_putstr("0x");
	while (i < 7)
	{
		hex[0] = g_hex_map[str[6 - i] / 16];
		hex[1] = g_hex_map[str[6 - i] % 16];
		write(1, hex, 2);
		i++;
	}
}

void	ft_print_hex(unsigned int n)
{
	char hex[2];

	if (n / 16 > 0)
		hex[0] = g_hex_map[n / 16];
	hex[1] = g_hex_map[n % 16];
	write(1, hex, 2);
}

void	ft_putnbrx(unsigned int nb)
{
	unsigned int nbr;

	nbr = nb;
	if (nbr >= 16)
	{
		ft_putnbrx(nbr / 16);
		ft_putnbrx(nbr % 16);
	}
	else
		ft_print_hex(nbr);
}

void	ft_putnbr(long nb)
{
	long nbr;

	if (nb == -2147483648)
	{
		nb = 147483648;
		ft_putchar('-');
		ft_putchar('2');
	}
	if (nb < 0)
	{
		nbr = nb * (-1);
		ft_putchar('-');
	}
	else
		nbr = nb;
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

int	ft_printf(const char *arr, ...)
{
	va_list args;
	char *ret;
	
	va_start(args, arr);
	while (*arr)
	{
		if (*arr == '%')
		{
			arr++;
			if (*arr == 'c')								// %c print a single character.
				ft_putchar(va_arg(args, int));
			else if (*arr == 's')							// %s print a string of characters.
				ft_putstr(va_arg(args, char*));
			else if (*arr == 'p')							// %p The void * pointer argument is printed in hexadecimal.
			{
				ret = va_arg(args, char*);
				// ft_print_hex_address((unsigned char*)&ret);
				ft_putstr("0x");
				ft_putnbr_base((unsigned long long)ret, "0123456789abcdef"); // Todo
			}
			else if (*arr == 'd' || *arr == 'i')			// %d print a decimal (base 10) number. • %i print an integer in base 10.
				ft_putnbr_base(va_arg(args, int), "0123456789");
			else if (*arr == 'u')							// %u print an unsigned decimal (base 10) number
				ft_putnbr_base((long)va_arg(args, unsigned int), "0123456789");
			else if (*arr == 'x')							// %x print a number in hexadecimal (base 16).
				ft_putnbr_base(va_arg(args, long), "0123456789abcdef"); // Todo
			else if (*arr == '%')							// %% print a percent sign
				ft_putchar('%');
		}
		else
			ft_putchar(*arr);
		arr++;
	}
	return (0);
}
