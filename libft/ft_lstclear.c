/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:13:09 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/18 13:13:10 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Удаляет и освобождает данный узел и каждый
преемник этого узла, используя функцию
'del' и free(3).
Наконец, указатель на список должен быть
установлен в NULL.

void del(void* ptr)
{
	printf("%s\n", (char*)ptr);
}
*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	if (del == NULL || lst == NULL)
		return ;
	ptr = *lst;
	while (ptr != NULL)
	{
		(*del)(ptr->content);
		ptr = ptr->next;
		free(*lst);
		*lst = ptr;
	}
}

/*
int main()
{
	t_list *head = (t_list *)malloc(sizeof(t_list));
	head->content = "hello";
	head->next = NULL;
	t_list *conet = (t_list *)malloc(sizeof(t_list));
	conet->content = "world";
	conet->next = NULL;
	head->next = conet;
	t_list *sonet = malloc(sizeof(t_list));
	sonet->content = "askjfn";
	sonet->next = NULL;
	head->next->next = sonet;
	printf("%d\n", ft_lstsize(head));
	ft_lstclear(&head, del);
	printf("%d\n", ft_lstsize(head));
	printf("%d\n", head);
	return 0;
}
*/
