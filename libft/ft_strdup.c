/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:27:47 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/18 12:27:49 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Функция strdup() путем обращения к функции malloc() выделяет память,
достаточную для хранения дубликата строки,на которую указывает str,
а затем производит копирование этой строки в выделенную область
и возвращает указатель на нее.
*/

char	*ft_strdup(const char *str)
{
	int		i;
	int		j;
	char	*ptr;

	i = ft_strlen(str);
	j = 0;
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr != NULL)
	{
		while (str[j] != '\0')
		{
			ptr[j] = str[j];
			j++;
		}
		ptr[j] = '\0';
		return (ptr);
	}
	return (NULL);
}
