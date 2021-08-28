/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainnbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 13:21:03 by dpiza             #+#    #+#             */
/*   Updated: 2021/08/28 17:50:12 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int vInt01 = 87;
	// int vInt02 = 0;
	// int vInt03 = -87;
	int retorno;

	retorno = printf("OG: vInt01 042.2i: %042.2i ", vInt01);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vInt01 042.2i: %042.2i ", vInt01);
	printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt01 .d: %.d ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 .d: %.d ", vInt01);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt01 .0d: %.0d ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 .0d: %.0d ", vInt01);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt01 1.1d: %1.1d ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 1.1d: %1.1d ", vInt01);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt01 3.2d: %3.2d ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 3.2d: %3.2d ", vInt01);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt01 3.3d: %3.3d ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 3.3d: %3.3d ", vInt01);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt01 5.5d: %5.5d ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 5.5d: %5.5d ", vInt01);
	// printf("Retorno: %d\n\n", retorno);

	// retorno = printf("OG: vInt01 5.6d: %5.6d ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 5.6d: %5.6d ", vInt01);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt01 6.5d: %6.5d ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 6.5d: %6.5d ", vInt01);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt01 6.6d: %6.6d ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 6.6d: %6.6d ", vInt01);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt01 6.7d: %6.7d ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 6.7d: %6.7d ", vInt01);
	// printf("Retorno: %d\n\n", retorno);

	// retorno = printf("OG: vInt01 -d: %-d ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 -d: %-d ", vInt01);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt01 -.d: %-.d ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 -.d: %-.d ", vInt01);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt01 -.0d: %-.0d ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 -.0d: %-.0d ", vInt01);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt01 -1.1d: %-1.1d ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 -1.1d: %-1.1d ", vInt01);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt01 -3.2d: %-3.2d ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 -3.2d: %-3.2d ", vInt01);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt01 -3.3d: %-3.3d ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 -3.3d: %-3.3d ", vInt01);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt01 -5.5d: %-5.5d ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 -5.5d: %-5.5d ", vInt01);
	// printf("Retorno: %d\n\n", retorno);

	// retorno = printf("OG: vInt01 -5.6d: %-5.6d ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 -5.6d: %-5.6d ", vInt01);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt01 -6.5d: %-6.5d ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 -6.5d: %-6.5d ", vInt01);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt01 -6.6d: %-6.6d ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 -6.6d: %-6.6d ", vInt01);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt01 -6.7d: %-6.7d ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 -6.7d: %-6.7d ", vInt01);
	// printf("Retorno: %d\n\n", retorno);

	// retorno = printf("OG: vInt02d: %d ", vInt02);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt02d: %d ", vInt02);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt03d: %d ", vInt03);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt04d: %d ", vInt03);
	// printf("Retorno: %d\n\n", retorno);
}
