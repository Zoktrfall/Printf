/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:41:36 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/25 16:41:38 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print1(char *str)
{
	int	returned_value;
	int	i;

	i = 0;
	returned_value = 0;
	while (str[i] != '\0')
	{
		ft_putchar_fd(str[i], 1);
		returned_value++;
		i++;
	}
	return (returned_value);
}

int	ft_print_unsigned(unsigned int oper)
{
	int				count;
	int				returned_value;
	char			*str;
	unsigned int	oper2;

	count = 1;
	returned_value = 0;
	oper2 = oper;
	while (oper2 >= 10)
	{
		oper2 /= 10;
		count++;
	}
	str = malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		return (0);
	str[count--] = '\0';
	while (count >= 0)
	{
		str[count--] = (oper % 10) + '0';
		oper /= 10;
	}
	returned_value += print1(str);
	free(str);
	return (returned_value);
}
