/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:00:40 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/18 13:00:42 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Возвращает последний узел списка
*/

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;
	t_list	*str;

	ptr = lst;
	str = lst;
	while (ptr != NULL)
	{
		str = ptr;
		ptr = ptr->next;
	}
	return (str);
}
