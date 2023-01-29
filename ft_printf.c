/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:40:54 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/25 16:40:55 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_modifications(va_list args, char format)
{
	int	returned_value;
	int	super;

	super = 0;
	returned_value = 0;
	if (format == 'X')
		super++;
	if (format == 'c')
		returned_value += ft_print_char(va_arg(args, int));
	else if (format == 'd' || format == 'i')
		returned_value += ft_print_number(va_arg(args, int));
	else if (format == 's')
		returned_value += ft_print_string(va_arg(args, char *));
	else if (format == 'u')
		returned_value += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		returned_value += ft_print_hexadec(va_arg(args, unsigned int), super);
	else if (format == 'p')
		returned_value += ft_print_pointer(va_arg(args, unsigned long *));
	else if (format == '%')
	{
		ft_putchar_fd('%', 1);
		returned_value++;
	}
	return (returned_value);
}

int	ft_printf(const char *format, ...)
{
	int		returned_value;
	int		i;
	va_list	args;

	va_start (args, format);
	returned_value = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i + 1] != '\0' && format[i] == '%'
			&& ft_strchr("diusxcXp%", format[i + 1]))
		{
			returned_value += ft_modifications(args, format[i + 1]);
			i++;
		}
		else if (format[i] != '%')
			returned_value += ft_print_char(format[i]);
		i++;
	}
	va_end(args);
	return (returned_value);
}
