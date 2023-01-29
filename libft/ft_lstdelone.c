/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:11:33 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/18 13:11:34 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Принимает в качестве параметра узел и освобождает
память от
содержимое узла с помощью функции 'del',
заданной в качестве параметра, и освободить
узел. Память 'next' не должна быть освобождена.

void del(void* ptr)
{
	printf("%s\n", (char*)ptr);
}
*/

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || del == NULL)
		return ;
	(*del)(lst->content);
	free(lst);
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
	ft_lstdelone(sonet, del);
	printf("%d\n", ft_lstsize(head));
	printf("%d\n", (int)head->next->next);
	return 0;
}
*/
