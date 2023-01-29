/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:41:17 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/25 16:41:18 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int a)
{
	int		returned_value;
	char	*str;

	returned_value = 0;
	str = (ft_itoa(a));
	ft_putstr_fd(str, 1);
	returned_value += ft_strlen(str);
	free(str);
	return (returned_value);
}
