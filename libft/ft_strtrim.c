/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:34:41 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/18 12:34:43 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Выделяет (с помощью malloc(3)) и возвращает копию
's1' с удаленными символами, указанными в 'set'
от начала и конца строки.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		j;
	char	*str;
	int		end;

	if (s1 == NULL)
		return (NULL);
	start = 0;
	j = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (s1[end] >= 0 && ft_strchr(set, s1[end]))
		end--;
	if (start == 0 && end == 0)
		str = (char *)malloc(sizeof(char) * (ft_strlen(s1) - 1));
	else
		str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1) / 2);
	if (str == NULL)
		return (NULL);
	while (start <= end)
		str[j++] = s1[start++];
	str[j] = '\0';
	return (str);
}
