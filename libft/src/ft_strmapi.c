/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 21:51:24 by dpiza             #+#    #+#             */
/*   Updated: 2021/06/08 14:42:16 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*ret;
	int		i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	ret = malloc((len + 1) * sizeof(char));
	i = 0;
	if (ret)
	{
		while (*s)
		{
			ret[i] = (*f)(i, *s);
			s++;
			i++;
		}
		ret[i] = '\0';
	}
	return (ret);
}
