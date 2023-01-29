/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:41:03 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/25 16:41:04 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_print_number(int a);
int	ft_print_string(char *str);
int	ft_print_unsigned(unsigned int oper);
int	ft_print_hexadec(unsigned int oper, int super);
int	ft_print_pointer(unsigned long *ptr);

#endif
