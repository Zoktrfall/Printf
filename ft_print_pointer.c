/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:41:45 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/25 16:41:46 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print3(char *str)
{
	int	i;
	int	returned_value;

	i = 0;
	returned_value = 0;
	ft_putstr_fd("0x", 1);
	returned_value += 2;
	while (str[i] == '0' && str[i + 1] != '\0')
		i++;
	while (str[i] != '\0')
	{
		ft_putchar_fd(str[i], 1);
		returned_value++;
		i++;
	}
	return (returned_value);
}

int	ft_print_pointer(unsigned long *ptr)
{
	char			*str;
	unsigned long	oper;
	int				count;

	count = 1;
	oper = (unsigned long)ptr;
	while (oper >= 10)
	{
		oper /= 10;
		count++;
	}
	str = malloc(sizeof(char) * (count + 1));
	str[count--] = '\0';
	oper = (unsigned long)ptr;
	while (count >= 0)
	{
		str[count--] = "0123456789abcdef"[oper % 16];
		oper /= 16;
	}
	count = 0;
	count += print3(str);
	free(str);
	return (count);
}
