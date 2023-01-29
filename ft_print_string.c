/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:41:11 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/25 16:41:12 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *str)
{
	int		returned_value;

	returned_value = 0;
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (returned_value + 6);
	}
	returned_value += ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (returned_value);
}
