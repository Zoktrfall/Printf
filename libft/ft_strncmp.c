/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:16:30 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/18 12:16:33 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
strncmp – сравнение строк с ограничением
количества сравниваемых символов.
*/

int	ft_strncmp(const char *str1, const char *str2, size_t count)
{
	size_t	i;
	size_t	b;

	i = 0;
	b = 0;
	if (*str1 == '\0' && *str2 == '\0')
		return (0);
	while ((str1[i] != '\0' || str2[i] != '\0') && b < count)
	{
		if ((str1[i] - str2[i] != 0))
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		b++;
		i++;
	}
	return (0);
}
