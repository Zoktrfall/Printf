/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:53:42 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/18 12:53:44 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Выделяет (с помощью malloc(3)) и возвращает новый узел.
Переменная'content' инициализируется
значением параметра 'content'.
Переменная 'next' инициализируется значением NULL.
     'Самореферентная Структура'
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (head == NULL)
		return (NULL);
	head->content = (void *)content;
	head->next = NULL;
	return (head);
}
