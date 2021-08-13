/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:59:03 by dpiza             #+#    #+#             */
/*   Updated: 2021/06/08 16:22:41 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	is;

	is = ft_strlen(s);
	while (*s != (char)c && is-- > 0)
		s++;
	if (!*s && c)
		return (NULL);
	return ((char *)s);
}
