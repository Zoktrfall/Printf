/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:20:34 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/18 12:20:35 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Функция memcmp побайтно сравнивает два массива (области памяти),
на которые указывают аргументы arr1 и arr2.
Каждый байт массива определяется типом unsigned char.
Сравнение продолжается, пока не будут проверено n
байт или пока не встретятся отличающиеся байты.
*/

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	unsigned char	*str;
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	str = (unsigned char *)arr1;
	ptr = (unsigned char *)arr2;
	while (i < n)
	{
		if (str[i] - ptr[i] != 0)
			return (str[i] - ptr[i]);
		i++;
	}
	return (0);
}
