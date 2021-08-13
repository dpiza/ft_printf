/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:51:31 by dpiza             #+#    #+#             */
/*   Updated: 2021/06/06 20:21:15 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long int	ret;
	int			signal;

	ret = 0;
	signal = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			signal = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		ret *= 10;
		ret += *nptr - 48;
		nptr++;
		if (ret > 2147483647 && signal == 1)
			return (-1);
		if (ret > 2147483648 && signal == -1)
			return (0);
	}
	return ((int)ret * signal);
}
