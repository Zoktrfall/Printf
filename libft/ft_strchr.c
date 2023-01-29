/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:12:35 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/18 12:12:37 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Функция strchr() возвращает указатель на первое
вхождение символа ch в строку, на которую указывает str.
Если символ ch не найден, возвращается NULL.
*/

char	*ft_strchr(const char *str, int ch)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] == (unsigned char)ch)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == ch)
		return ((char *)str + i);
	return (NULL);
}
