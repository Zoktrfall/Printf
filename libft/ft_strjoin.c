/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:31:29 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/18 12:31:31 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Описание Выделяет (с помощью malloc(3)) и возвращает новый
строка, которая является результатом конкатенации
из «s1» и «s2».
*/

char	*oper(char const *s1, char const *s2, char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[j] != '\0')
	{
		str[i++] = s1[j];
		j++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		str[i++] = s2[j];
		j++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len1;
	int		len2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str != NULL)
		return (oper(s1, s2, str));
	return (NULL);
}
