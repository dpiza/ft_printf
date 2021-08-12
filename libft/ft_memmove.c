/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:44:03 by dpiza             #+#    #+#             */
/*   Updated: 2021/05/28 16:02:16 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;

	if (src < dest)
	{
		d = dest + n - 1;
		src += n - 1;
		while (n > 0)
		{
			*(char *)d = *(char *)src;
			d--;
			src--;
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
