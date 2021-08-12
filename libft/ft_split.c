/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 15:40:11 by dpiza             #+#    #+#             */
/*   Updated: 2021/06/08 14:39:09 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wcount(char const *s, char c)
{
	int		n;

	n = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		while (*s && *s != c)
			s++;
		n++;
		while (*s && *s == c)
			s++;
	}
	return (n);
}

static size_t	ft_wordlen(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		n;
	char	**ret;
	int		i;

	i = -1;
	if (!s)
		return (NULL);
	n = ft_wcount(s, c);
	ret = malloc((n + 1) * sizeof(char *));
	n = 0;
	if (ret)
	{
		while (s[++i])
		{
			if (s[i] && s[i] != c)
			{
				ret[n] = ft_substr(s, i, ft_wordlen(&s[i], c));
				i = (i + ft_wordlen(&s[i], c) - 1);
				n++;
			}
		}
		ret[n] = NULL;
	}
	return (ret);
}
