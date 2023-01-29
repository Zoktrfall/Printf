/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:14:23 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/18 13:14:24 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Итерирует список 'lst' и применяет функцию
'f' на содержимое каждого узла.

void func(void* ptr)
{
	printf("%s\n", (char*)ptr);
}
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;

	if (f == NULL || lst == NULL)
		return ;
	ptr = lst;
	while (ptr != NULL)
	{
		(*f)(ptr->content);
		ptr = ptr->next;
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
	ft_lstiter(sonet, func);
	printf("%s\n", (char*)head->content);
	printf("%d\n", ft_lstsize(head));
	printf("%d\n", head);
	return 0;
}
*/
