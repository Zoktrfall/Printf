/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadec.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:41:28 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/25 16:41:30 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print2(char *pop, int super)
{
	int	i;
	int	returned_value;

	returned_value = 0;
	i = 0;
	while (pop[i] == '0' && pop[i + 1] != '\0')
		i++;
	while (pop[i] != '\0')
	{
		if (pop[i] >= 'a' && pop[i] <= 'f' && super)
			ft_putchar_fd(pop[i] - 32, 1);
		else
			ft_putchar_fd(pop[i], 1);
		returned_value++;
		i++;
	}
	return (returned_value);
}

int	ft_print_hexadec(unsigned int oper, int super)
{
	char			*pop;
	int				count;
	unsigned int	tab;

	count = 1;
	tab = oper;
	while (tab >= 10)
	{
		tab /= 10;
		count++;
	}
	pop = malloc(sizeof(char) * (count + 1));
	if (pop == NULL)
		return (0);
	pop[count--] = '\0';
	while (count >= 0)
	{
		pop[count--] = "0123456789abcdef"[oper % 16];
		oper /= 16;
	}
	count = 0;
	count += print2(pop, super);
	free(pop);
	return (count);
}
