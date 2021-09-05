/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainhex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 13:21:03 by dpiza             #+#    #+#             */
/*   Updated: 2021/09/04 21:59:35 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	char *vStr = "String";
	int vInt01 = 0;
	int retorno;

	retorno = printf("OG: LONG_MIN x: %x ",  -4294967296);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: LONG_MIN x: %x ", -4294967296);
	printf("Retorno: %d\n\n", retorno);

	retorno = printf("OG: LONG_MAX x: %x ", LONG_MAX);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: LONG_MAX x: %x ", LONG_MAX);
	printf("Retorno: %d\n\n", retorno);
	
	retorno = printf("OG: ULONG_MAX x: %x ", ULONG_MAX);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: ULONG_MAX x: %x ", ULONG_MAX);
	printf("Retorno: %d\n\n", retorno);

	retorno = printf("OG: 9223372036854775807LL x: %x ", 9223372036854775807LL);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: 9223372036854775807LL x: %x ", 9223372036854775807LL);
	printf("Retorno: %d\n\n", retorno);

	retorno = printf("OG:  %x %x %x %x %x %x %x ", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT:  %x %x %x %x %x %x %x ", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("Retorno: %d\n\n", retorno);

	retorno = printf("OG: %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%% ", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%% ", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("Retorno: %d\n\n", retorno);
	
	retorno = printf("OG: vInt01 -#.10x: %-#.10x ", 123);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vInt01 -#.10x: %-#.10x ", 123);
	printf("Retorno: %d\n\n", retorno);

	retorno = printf("OG: vInt01 .10x: %.10x ", 123);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vInt01 .10x: %.10x ", 123);
	printf("Retorno: %d\n\n", retorno);

	retorno = printf("OG: vInt01 010x: %010x ", 123);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vInt01 010x: %010x ", 123);
	printf("Retorno: %d\n\n", retorno);

	retorno = printf("OG: vInt01 #10x: %#10x ", 123);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vInt01 #10x: %#10x ", 123);
	printf("Retorno: %d\n\n", retorno);

	retorno = printf("OG: vInt01 #010x: %#010x ", 123);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vInt01 #010x: %#010x ", 123);
	printf("Retorno: %d\n\n", retorno);

	retorno = printf("OG: vInt01 #05x: %#05x ", 123);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vInt01 #05x: %#05x ", 123);
	printf("Retorno: %d\n\n", retorno);

	retorno = printf("OG: vInt01 #09.8x: %#05.8x ", 0x7fffffff);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vInt01 #09.8x: %#05.8x ", 0x7fffffff);
	printf("Retorno: %d\n\n", retorno);

	retorno = printf("OG: vInt01 #010.8x: %#010.8x ", 0x7fffffff);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vInt01 #010.8x: %#010.8x ", 0x7fffffff);
	printf("Retorno: %d\n\n", retorno);
	
	retorno = printf("OG: vInt01 #011.8x: %#012.8x ", 0x7fffffff);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vInt01 #011.8x: %#012.8x ", 0x7fffffff);
	printf("Retorno: %d\n\n", retorno);
	
	retorno = printf("OG: vInt01 #x: %#x ", 0);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vInt01 #x: %#x ", 0);
	printf("Retorno: %d\n\n", retorno);

	retorno = printf("OG: vInt01 #x: %#x ", 8);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vInt01 #x: %#x ", 8);
	printf("Retorno: %d\n\n", retorno);

	retorno = printf("OG: 12 -#013.10x: %-#013.10x ", 12);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: 12 -#013.10x: %-#013.10x ", 12);
	printf("Retorno: %d\n\n", retorno);
	
	retorno = printf("OG: vInt01 #X: %#X ", vInt01);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vInt01 #X: %#X ", vInt01);
	printf("Retorno: %d\n\n", retorno);

	retorno = printf("OG: vInt01 #5x: %#5x ", vInt01);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vInt01 #5x: %#5x ", vInt01);
	printf("Retorno: %d\n\n", retorno);

	retorno = printf("OG: vInt01 #.5x: %#.5x ", vInt01);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vInt01 #.5x: %#.5x ", vInt01);
	printf("Retorno: %d\n\n", retorno);

	retorno = printf("OG: vInt01 #9.5x: %#9.5x ", vInt01);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vInt01 #9.5x: %#9.5x ", vInt01);
	printf("Retorno: %d\n\n", retorno);

	retorno = printf("OG: vInt01 9.5x: %9.5x ", vInt01);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vInt01 9.5x: %9.5x ", vInt01);
	printf("Retorno: %d\n\n", retorno);

	retorno = printf("OG: vInt01 -9.5x: %-9.5x ", vInt01);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vInt01 -9.5x: %-9.5x ", vInt01);
	printf("Retorno: %d\n\n", retorno);
	
	retorno = printf("OG: vStr .5p: %.5p ", (void *)0);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vStr .5p: %.5p ", (void *)0);
	printf("Retorno: %d\n\n", retorno);

	retorno = printf("OG: vStr 15p: %15p ", vStr);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vStr 15p: %15p ", vStr);
	printf("Retorno: %d\n\n", retorno);

	retorno = printf("OG: vStr -15p: %-15p ", vStr);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vStr -15p: %-15p ", vStr);
	printf("Retorno: %d\n\n", retorno);

	retorno = printf("OG: vStr .p: %.p ", vStr);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vStr .p: %.p ", vStr);
	printf("Retorno: %d\n\n", retorno);

	retorno = printf("OG: vStr .15p: %.15p ", vStr);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vStr .15p: %.15p ", vStr);
	printf("Retorno: %d\n\n", retorno);

	retorno = printf("OG: vStr 14.16p: %14.16p ", vStr);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vStr 14.16p: %14.16p ", vStr);
	printf("Retorno: %d\n\n", retorno);
	
	retorno = printf("OG: vStr 18.14p: %18.14p ", vStr);
	printf("Retorno: %d\n", retorno);
	retorno = ft_printf("FT: vStr 18.14p: %18.14p ", vStr);
	printf("Retorno: %d\n\n", retorno);
}
