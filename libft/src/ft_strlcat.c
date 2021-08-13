/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:14:08 by dpiza             #+#    #+#             */
/*   Updated: 2021/05/31 12:28:34 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	isize;

	isize = 0;
	while (*dst && isize < size)
	{
		isize++;
		dst++;
	}
	while (*src && isize + 1 < size)
	{
		*dst++ = *src++;
		isize++;
	}
	if (isize < size)
		*dst = '\0';
	while (*src++)
		isize++;
	return (isize);
}
