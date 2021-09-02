/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainhex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 13:21:03 by dpiza             #+#    #+#             */
/*   Updated: 2021/09/01 20:27:12 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	// char *vStr = "String";
	int vInt01 = 0;
	// int vInt02 = 0;
	// int vInt03 = -87;
	int retorno;

	retorno = printf("OG: vInt01 010.20x: %010.20x ", 42);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vInt01 010.20x: %010.20x ", 42);
	printf("Retorno: %d\n\n", retorno);
	
	retorno = printf("OG: vInt01 042.20x: %042.20x ", 42000);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vInt01 042.20x: %042.20x ", 42000);
	printf("Retorno: %d\n\n", retorno);

	retorno = printf("OG: vInt01 042.52x: %042.52x ", 42000);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vInt01 042.52x: %042.52x ", 42000);
	printf("Retorno: %d\n\n", retorno);

	retorno = printf("OG: vInt01 050.50x: %050.50x ", 42);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vInt01 050.50x: %050.50x ", 42);
	printf("Retorno: %d\n\n", retorno);

	// retorno = printf("OG: vInt01 .x: %.x ", 0);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 .x: %.x ", 0);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt01 10.x: %10.x ", 0);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 10.x: %10.x ", 0);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt01 -10.x: %-10.x ", 0);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 -10.x: %-10.x ", 0);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt01 #X: %#X ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 #X: %#X ", vInt01);
	// printf("Retorno: %d\n\n", retorno);

	// retorno = printf("OG: vInt01 #5x: %#5x ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 #5x: %#5x ", vInt01);
	// printf("Retorno: %d\n\n", retorno);

	// retorno = printf("OG: vInt01 #.5x: %#.5x ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 #.5x: %#.5x ", vInt01);
	// printf("Retorno: %d\n\n", retorno);

	// retorno = printf("OG: vInt01 #9.5x: %#9.5x ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 #9.5x: %#9.5x ", vInt01);
	// printf("Retorno: %d\n\n", retorno);

	// retorno = printf("OG: vInt01 9.5x: %9.5x ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 9.5x: %9.5x ", vInt01);
	// printf("Retorno: %d\n\n", retorno);

	// retorno = printf("OG: vInt01 -9.5x: %-9.5x ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01 -9.5x: %-9.5x ", vInt01);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vStr 1p: %.5p ", (void *)10);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vStr 1p: %.5p ", (void *)10);
	// printf("Retorno: %d\n\n", retorno);

	// retorno = printf("OG: vStr 15p: %15p ", vStr);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vStr 15p: %15p ", vStr);
	// printf("Retorno: %d\n\n", retorno);

	// retorno = printf("OG: vStr -15p: %-15p ", vStr);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vStr -15p: %-15p ", vStr);
	// printf("Retorno: %d\n\n", retorno);

	// retorno = printf("OG: vStr .p: %.p ", vStr);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vStr .p: %.p ", vStr);
	// printf("Retorno: %d\n\n", retorno);

	// retorno = printf("OG: vStr .15p: %.15p ", vStr);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vStr .15p: %.15p ", vStr);
	// printf("Retorno: %d\n\n", retorno);

	// retorno = printf("OG: vStr 14.16p: %14.16p ", vStr);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vStr 14.16p: %14.16p ", vStr);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vStr 18.14p: %18.14p ", vStr);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vStr 18.14p: %18.14p ", vStr);
	// printf("Retorno: %d\n\n", retorno);
}
