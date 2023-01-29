/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:44:27 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/18 12:44:29 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Применяет функцию 'f' к каждому символу
строки, переданной в качестве аргумента, передавая его индекс
в качестве первого аргумента. Каждый символ передается по
адресу 'f' для изменения, если это необходимо.
*/

//void func(unsigned int i, char* ptr);

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!f || !s)
		return ;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

/*
int main()
{
	char mas[] = "hello";
	ft_striteri(mas, func);
	return 0;
}

void func(unsigned int i, char* ptr)
{
	printf("%d  %s\n", i, ptr);
}
*/
