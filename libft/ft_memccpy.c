/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:17:57 by dpiza             #+#    #+#             */
/*   Updated: 2021/05/28 16:32:23 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n > 0)
	{
		ft_memcpy(dest, src, sizeof(char));
		if (*(unsigned char *)src == (unsigned char)c)
			return (dest + 1);
		dest++;
		src++;
		n--;
	}
	return (NULL);
}
