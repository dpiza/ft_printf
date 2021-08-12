/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:46:28 by dpiza             #+#    #+#             */
/*   Updated: 2021/06/06 20:06:23 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	if (!dst || !src)
		return (0);
	i = ft_strlen(src);
	if (size == 0)
		return (i);
	while (*src && size > 0)
	{
		*dst++ = *src++;
		size--;
	}
	if (size == 0)
		dst--;
	*dst = '\0';
	return (i);
}
