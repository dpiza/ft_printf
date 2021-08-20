/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 13:52:00 by dpiza             #+#    #+#             */
/*   Updated: 2021/08/19 20:51:00 by dpiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define TRUE 1
# define FALSE 0

#include <stdarg.h>
#include <unistd.h>
#include "../libft/libft.h"

typedef struct
{
	int		justify;
	int		plus;
	int		invisible_plus;
	int		zerofill;
	int		width;
	int		precision;
	int		zero_x;
	int		specifier;
	int		params_length;
	char	*params;
}			t_flags;
int		ft_printf(const char *, ...);
t_flags	flag_parse(const char *s);
char	*c_format_string(va_list args, t_flags flags);
char	*s_format_string(va_list args, t_flags flags);
char	*p_format_string(va_list args, t_flags flags);
char	*x_format_string(va_list args, t_flags flags);
char	*d_format_string(va_list args, t_flags flags);
char	*u_format_string(va_list args, t_flags flags);
int		add_char(char **str, char c);

#endif