/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:46:42 by dpiza             #+#    #+#             */
/*   Updated: 2021/06/08 16:26:05 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	is;

	if (!*s && c)
		return (NULL);
	is = ft_strlen(s);
	if (c == 0)
	{
		s += is;
		return ((char *)s);
	}
	s += is - 1;
	while (*s != (char)c && is-- > 1)
		s--;
	if (is == 0)
		return (NULL);
	return ((char *)s);
}
