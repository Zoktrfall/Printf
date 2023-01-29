/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:22:52 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/18 12:22:54 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Функция strnstr находит первое вхождение завершающейся
нулем строки str2 в строке str1, где ищется не более count символов.
Символы, которые появляются послеСимвол \0 не ищется.
*/

char	*ft_strnstr(const char *str1, const char *str2, size_t count)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (count == 0 && str1 == NULL)
		return (0);
	if (*str2 == '\0')
		return ((char *)str1);
	while (str1[i] != '\0' && i < count)
	{
		while (str2[j] == str1[j + i] && i + j < count)
		{
			if (str2[j + 1] == '\0')
				return ((char *)str1 + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
