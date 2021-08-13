/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 00:19:29 by dpiza             #+#    #+#             */
/*   Updated: 2021/08/12 19:53:56 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_base(long long nbr, char *basec, long long basen, int i)
{
	char b;

	if (nbr == -2147483648)
	{
		nbr = 147483648;
		write(1, "-", 1);
		b = basec[2];
		write(1, &b, 1);
	}
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		write(1, "-", 1);
	}
	if (nbr >= basen)
		ft_print_base(nbr / basen, basec, basen, i);
	b = basec[nbr % basen];
	write(1, &b, 1);
}

int		ft_is_valid(char *base)
{
	char c;

	c = *base;
	base++;
	while (*base != '\0')
	{
		if (*base != c)
		{
			c = *base;
			base++;
		}
		else
			return (0);
	}
	return (1);
}

void	ft_putnbr_base(long long nbr, char *base)
{
	char	*basec;
	int		i;
	int		j;

	i = 0;
	j = 0;
	basec = base;
	while (*basec != '\0')
	{
		basec++;
		i++;
	}
	if (!(i > 1))
		return ;
	if (!ft_is_valid(base))
	{
		return ;
	}
	ft_print_base(nbr, base, i, j);
}
