/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:42:49 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/18 12:42:51 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Применяет функцию 'f' к каждому символу строки
строке 's', и передавая ее индекс в качестве первого аргумента
создает новую строку (с помощью malloc(3)) в результате
в результате последовательных применений функции 'f'.
*/

//char func(unsigned int n, char s);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	j;
	unsigned int	i;

	i = 0;
	j = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str != NULL)
	{
		while (s[i] != '\0')
		{
			str[j++] = f(i, s[i]);
			i++;
		}
		str[j] = '\0';
		return (str);
	}
	return (NULL);
}

/*
int main()
{
   char mas[] = "hello";
	printf("%s", ft_strmapi(mas, func));
	return 0;
}

char func(unsigned int n, char s)
{
	return s - 32;
}
*/
