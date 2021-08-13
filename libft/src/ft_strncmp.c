/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:50:33 by dpiza             #+#    #+#             */
/*   Updated: 2021/05/31 12:55:33 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1++ == *s2++ && (*s1 || *s2) && n > 1)
		n--;
	s1--;
	s2--;
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
