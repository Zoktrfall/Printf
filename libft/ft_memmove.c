/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:03:37 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/18 12:03:39 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Функция memmove копирует len байт из массива (области памяти),
на который указывает аргумент src,в массив (область памяти), 
на который указывает аргумент dst.
При этом массивы (области памяти) могут пересекаться.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cdst;
	char	*csrc;
	int		i;

	cdst = (char *)dst;
	csrc = (char *)src;
	i = (int)len - 1;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst > src)
	{
		while (i >= 0)
		{
			cdst[i] = csrc[i];
			i--;
		}
		return (dst);
	}	
	else
		return (ft_memcpy(dst, src, len));
}
