/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:39:33 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/18 12:39:35 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Выделяет (с помощью malloc(3)) и возвращает строку
представляющее целое число, полученное в качестве аргумента.
Отрицательные числа должны быть обработаны.
*/

char	*negative(int n)
{
	char	*ptr;
	int		temp;
	int		count;

	n *= -1;
	temp = n;
	count = 1;
	while (n >= 10)
	{
		count++;
		n /= 10;
	}
	count++;
	ptr = (char *)malloc(sizeof(char) * (count + 1));
	if (ptr == NULL)
		return (NULL);
	ptr[count--] = '\0';
	while (count > 0)
	{
		ptr[count--] = temp % 10 + '0';
		temp /= 10;
	}
	ptr[count] = '-';
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		count;
	int		temp;

	temp = n;
	count = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		return (negative(n));
	while (n >= 10)
	{
		count++;
		n /= 10;
	}
	str = (char *)malloc(sizeof(char) * (count + 1));
	str[count--] = '\0';
	if (str == NULL)
		return (NULL);
	while (count >= 0)
	{
		str[count--] = temp % 10 + '0';
		temp /= 10;
	}
	return (str);
}
