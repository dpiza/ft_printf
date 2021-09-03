/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 13:21:03 by dpiza             #+#    #+#             */
/*   Updated: 2021/09/03 16:00:24 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	// char vCharNull = '\0';
	// char vChar01 = 'c';
	// char *vChar02 = "String com 19 char.";
	// char *null_str = NULL;
	// char *vChar02 = "Denny";
	// char *vChar03 = "Outra String";
	// char vChar04 = '0';
	// int vInt01 = 87263;
	// int vInt01 = 0;
	// int vInt02 = -87;
	int retorno;
	// double vDoub01 = 872.63;

	retorno = printf("%--4.1s %s %------------------9.3s of %s of %-5.7s", "for", "the", "goooood", "aaall", "us");
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("%--4.1s %s %------------------9.3s of %s of %-5.7s", "for", "the", "goooood", "aaall", "us");
	printf("Retorno: %d\n\n", retorno);

	retorno = printf("-4.1s: %-4.10s ", "for");
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("-4.1s: %-4.10s ", "for");
	printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: %%____d: [%    d] ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: %%____d: [%    d] ", vInt01);
	// printf("Retorno: %d\n\n", retorno);
	

	// retorno = printf("OG: vCharNull: [%c] ", vCharNull);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vCharNull: [%c] ", vCharNull);
	// printf("Retorno: %d\n\n", retorno);

	// retorno = printf("String: %s Char: %c fim ", "123123", '\0');
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("String: %s Char: %c fim ", "123123", '\0');
	// printf("Retorno: %d\n\n", retorno);

	// retorno = printf("OG: vChar01c: %c ", vChar01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vChar01c: %c ", vChar01);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vChar02s: %.10s ", vChar02);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vChar02s: %.10s ", vChar02);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vChar02p: %p ", vChar02);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vChar02p: %p ", vChar02);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vChar03s: %s ", vChar03);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vChar03s: %s ", vChar03);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vChar03p: %p ", vChar03);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vChar03p: %p ", vChar03);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt01d: %+-50d ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01d: %+-50d ", vInt01);
	// printf("Retorno: %d\n\n", retorno);

	// retorno = printf("OG: vInt01d: %-3.2d ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01d: %-3.2d ", vInt01);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt01i: %i ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01i: %i ", vInt01);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt01u: %u ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01u: %u ", vInt01);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt02d: %-3.2d ", vInt02);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt02d: %-3.2d ", vInt02);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt02i: %i ", vInt02);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt02i: %i ", vInt02);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt02u: %u ", vInt02);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt02u: %u ", vInt02);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: %%%%%%%% ");
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: %%%%%%%% ");
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt01x: %#x ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01x: %#x ", vInt01);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: vInt01X: %X ", vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: vInt01X: %X ", vInt01);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: Quatro flags: Char: %c String: %s Endereço: %p Hex: %x ", '\0', vChar02, NULL, vInt01);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: Quatro flags: Char: %c String: %s Endereço: %p Hex: %x ", '\0', vChar02, NULL, vInt01);
	// printf("Retorno: %d\n\n", retorno);

	// retorno = printf("OG: null_str: %s ", null_str);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: null_str: %s ", null_str);
	// printf("Retorno: %d\n\n", retorno);
	
	// retorno = printf("OG: null_ptr: %p ", (void *)-1);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: null_ptr: %p ", (void *)-1);
	// printf("Retorno: %d\n\n", retorno);

	// retorno = printf("OG: 0x: %x ", -1);
	// printf("Retorno: %d\n", retorno);
	// retorno = ft_printf("FT: 0x: %x ", -1);
	// printf("Retorno: %d\n\n", retorno);

	
	// printf("OG: TestBonus %5c\n", vChar04);
	// printf("OG: vChar01c: %c vChar02s: %s vChar02p: %p vChar03s: %s vChar03p: %p vInt01d: %d vInt01i: %i vInt01u: %u vInt01x: %x %%%%%%%%\n", vChar01, vChar02, vChar02, vChar03, vChar03, vInt01, vInt01, vInt01, vInt01);
	// ft_printf("FT: vChar01c: %c vChar02s: %s vChar02p: %p vChar03s: %s vChar03p: %p vInt01d: %d vInt01i: %i vInt01u: %u vInt01x: %x %%%%%%%%\n", vChar01, vChar02, vChar02, vChar03, vChar03, vInt01, vInt01, vInt01, vInt01);
	// printf("vInt01x: %x\n", vInt01);
	// ft_printfr("Uma variável: %sl\n", vChar03);
	// printf("vDoub01f: %f\n", vDoub01);
}
