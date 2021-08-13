/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 14:05:04 by dpiza             #+#    #+#             */
/*   Updated: 2021/05/27 14:54:31 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*pret;

	pret = malloc ((ft_strlen(s) + 1) * sizeof(char));
	if (!pret)
		return (pret);
	ft_strlcpy(pret, s, (ft_strlen(s) + 1));
	return (pret);
}
