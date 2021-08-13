/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 13:21:03 by dpiza             #+#    #+#             */
/*   Updated: 2021/08/13 15:21:44 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char vChar01 = '$';
	char *vChar02 = "String com 19 char.";
	char *vChar03 = "Outra String";
	int vInt01 = 87263;
	int vInt02 = -87263;
	int retorno;
	// double vDoub01 = 872.63;

	retorno = printf("OG: vChar01c: %c ", vChar01);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vChar01c: %c ", vChar01);
	printf("Retorno: %d\n\n", retorno);
	retorno = printf("OG: vChar02s: %s ", vChar02);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vChar02s: %s ", vChar02);
	printf("Retorno: %d\n\n", retorno);
	printf("OG: vChar02p: %p\n", vChar02);
	ft_printf("FT: vChar02p: %p\n\n", vChar02);
	printf("OG: vChar03s: %s\n", vChar03);
	ft_printf("FT: vChar03s: %s\n\n", vChar03);
	printf("OG: vChar03p: %p\n", vChar03);
	ft_printf("FT: vChar03p: %p\n\n", vChar03);
	printf("OG: vInt01d: %d\n", vInt01);
	ft_printf("FT: vInt01d: %d\n\n", vInt01);
	printf("OG: vInt01i: %i\n", vInt01);
	ft_printf("FT: vInt01i: %i\n\n", vInt01);
	printf("OG: vInt01u: %u\n", vInt01);
	ft_printf("FT: vInt01u: %u\n\n", vInt01);
	printf("OG: vInt02d: %d\n", vInt02);
	ft_printf("FT: vInt02d: %d\n\n", vInt02);
	printf("OG: vInt02i: %i\n", vInt02);
	ft_printf("FT: vInt02i: %i\n\n", vInt02);
	printf("OG: vInt02u: %u\n", vInt02);
	ft_printf("FT: vInt02u: %u\n\n", vInt02);
	printf("OG: %%%%%%%%\n");
	ft_printf("FT: %%%%%%%%\n\n");
	printf("OG: vInt01x: %x\n", vInt01);
	ft_printf("FT: vInt01x: %x\n\n", vInt01);
	printf("OG: vInt01X: %X\n", vInt01);
	ft_printf("FT: vInt01X: %X\n\n", vInt01);
	printf("OG: Tres flags: String: %s Endereço: %p Hex: %x\n", vChar02, vChar02, vInt01);
	ft_printf("FT: Tres flags: String: %s Endereço: %p Hex: %x\n", vChar02, vChar02, vInt01);
	// printf("OG: vChar01c: %c vChar02s: %s vChar02p: %p vChar03s: %s vChar03p: %p vInt01d: %d vInt01i: %i vInt01u: %u vInt01x: %x %%%%%%%%\n", vChar01, vChar02, vChar02, vChar03, vChar03, vInt01, vInt01, vInt01, vInt01);
	// ft_printf("FT: vChar01c: %c vChar02s: %s vChar02p: %p vChar03s: %s vChar03p: %p vInt01d: %d vInt01i: %i vInt01u: %u vInt01x: %x %%%%%%%%\n", vChar01, vChar02, vChar02, vChar03, vChar03, vInt01, vInt01, vInt01, vInt01);
	// printf("vInt01x: %x\n", vInt01);
	// ft_printfr("Uma variável: %sl\n", vChar03);
	// printf("vDoub01f: %f\n", vDoub01);
}
