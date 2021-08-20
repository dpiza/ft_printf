/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 00:19:29 by dpiza             #+#    #+#             */
/*   Updated: 2021/08/19 16:40:36 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	_add_char(char **str, char c)
{
	char *ret;
	char *tmp;
	
	ret = malloc (2 * sizeof(char));
	ret[0] = c;
	ret[1] = '\0';
	tmp = ft_strjoin(*str, ret);
	free (ret);
	free (*str);
	*str = tmp;
	return (1);
}

char	*ft_add_base(long long nbr, char *basec, long long basen)
{
	char 	b;
	char	*invert;
	char	*ret;
	int		i;

	invert = ft_strdup("");
	while (nbr >= basen)
	{
		b = basec[nbr % basen];
		_add_char(&invert, b);
		if (nbr / basen < basen)
		{
			b = basec[nbr / basen];
			_add_char(&invert, b);
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

int		_ft_is_valid(char *base)
{
	char 	c;

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

char	*ft_nbr_base(long long nbr, char *base)
{
	char 	*ret;
	char	*basec;
	int		i;

	i = 0;
	basec = base;
	while (*basec != '\0')
	{
		basec++;
		i++;
	}
	if (!(i > 1))
		return (NULL);
	if (!_ft_is_valid(base))
		return (NULL);
	ret = ft_add_base(nbr, base, i);
	return (ret);
}