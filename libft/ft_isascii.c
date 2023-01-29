/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:54:52 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/18 11:54:53 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Макрос isascii() не определен стандартом ANSI С,
возвращает ненулевое значение,
если значение ch находится в пределах от 0 до 0x7F,
в противном случае возвращается 0.
*/

int	ft_isascii(int a)
{
	if (a >= 0 && a <= 0x7F)
		return (1);
	return (0);
}
