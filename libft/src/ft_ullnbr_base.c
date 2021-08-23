/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ullnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 00:19:29 by dpiza             #+#    #+#             */
/*   Updated: 2021/08/23 13:11:21 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ulladd_base(unsigned long long nbr, char *basec, long long basen)
{
	char 	b;
	char	*invert;
	char	*ret;
	int		i;

	invert = ft_strdup("");
	if (nbr < basen)
		add_char(&invert, basec[nbr % basen]);
	while (nbr >= basen)
	{
		b = basec[nbr % basen];
		add_char(&invert, b);
		if (nbr / basen < basen)
		{
			b = basec[nbr / basen];
			add_char(&invert, b);
		}
		nbr = nbr / basen;
	}
	ret = malloc ((ft_strlen(invert) + 1) * sizeof(char));
	i = 0;
	while(invert[i] != '\0')
	{
		ret[i] = invert[ft_strlen(invert) - i - 1];
		i++;
	}
	ret[i] = '\0';
	free (invert);
	return (ret);
}

char	*ft_ullnbr_base(unsigned long long nbr, char *base)
{
	char 	*ret;
	char	*basec;
	int		i;

	i = 0;
	if (nbr == 0)
		return (ft_strdup("0"));
	basec = base;
	while (*basec != '\0')
	{
		basec++;
		i++;
	}
	if (!(i > 1))
		return (NULL);
	if (!ft_base_is_valid(base))
		return (NULL);
	ret = ft_ulladd_base((unsigned long long)nbr, base, i);
	return (ret);
}