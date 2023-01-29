/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:30:14 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/18 12:30:16 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Выделяет (с помощью malloc(3)) и возвращает подстроку
из строки ’’.
Подстрока начинается с индекса 'start' и имеет длину
максимальный размер 'len'.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*pod;
	size_t		s_len;

	i = 0;
	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	if (len > s_len)
		len = s_len;
	pod = malloc(sizeof(char) * (len + 1));
	if (pod == NULL)
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		pod[i] = s[start];
		i++;
		start++;
	}
	pod[i] = '\0';
	return (pod);
}
