/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:15:54 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/18 13:15:55 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Итерирует список 'lst' и применяет функцию
'f' на содержимом каждого узла. Создает
новый список в результате последовательного
применения функции 'f'. Функция 'del'
используется для удаления содержимого узла,
если это необходимо.

void del(void* count)
{

}

void *func(void* ptr)
{
	static int i = 1;
	if(i == 1)
	{
		i++;
		return ptr = "OPER!!!";
	}
	if(i == 2)
	{
		i++;
		return ptr = "oper!!!";
	}
	return ptr = "more";
}
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*str;

	head = NULL;
	if (*f == NULL || del == NULL)
		return (NULL);
	while (lst != NULL)
	{
		str = ft_lstnew((*f)(lst->content));
		if (str == NULL)
		{
			ft_lstclear (&head, (*del));
			return (NULL);
		}
		ft_lstadd_back (&head, str);
		lst = lst->next;
	}
	return (head);
}

/*
int main()
{
	t_list *head = (t_list *)malloc(sizeof(t_list));
	head->content = "OPER11";
	head->next = NULL;
	t_list *oper = (t_list *)malloc(sizeof(t_list));
	oper->content = "OPER22";
	oper->next = NULL;
	head->next = oper;
	oper = malloc(sizeof(t_list));
	oper->content = "OPER33";
	oper->next = NULL;
	head->next->next = oper;
	printf("%s\n", (char*)ft_lstmap(head, func, del)->next->next->content);
	return 0;
}
*/
