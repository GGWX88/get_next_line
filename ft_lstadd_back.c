/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggan <ggan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 15:58:30 by ggan              #+#    #+#             */
/*   Updated: 2026/01/23 15:58:32 by ggan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (lst != NULL && *lst != NULL)
	{
		ptr = *lst;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}
	if (lst != NULL && *lst == NULL)
	{
		*lst = new;
	}
}

//==========================main=============================
/*

int	main(void)
{
	t_list	*ptr;
	t_list	*head;
	t_list	*node0;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node0 = ft_lstnew("one");
	node1 = ft_lstnew("two");
	node2 = ft_lstnew("three");
	node3 = ft_lstnew("four");



//
	head = node0;
	printf("adds NULL behind node0\n");
	ft_lstadd_back(&head, NULL);
	ptr = head;
	while (ptr != NULL)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	printf("\n");
//
//
	head = NULL;
	printf("adds node1 behind NULL\n");
	ft_lstadd_back(&head, node1);
	ptr = head;
	while (ptr != NULL)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	printf("\n");
//
//
	head = NULL;
	printf("adds NULL behind NULL\n");
	ft_lstadd_back(&head, NULL);
	ptr = head;
	while (ptr != NULL)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	printf("\n");
//

	head = node0;
	ptr = head;
	printf("Number of elements	:%i\n", ft_lstsize(head));
	while (ptr != NULL)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	printf("\n");


	ft_lstadd_back(&head, node1);
	ptr = head;
	printf("Number of elements	:%i\n", ft_lstsize(head));
	while (ptr != NULL)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	printf("\n");


	ft_lstadd_back(&head, node2);
	ptr = head;
	printf("Number of elements	:%i\n", ft_lstsize(head));
	while (ptr != NULL)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	printf("\n");


	ft_lstadd_back(&head, node3);
	ptr = head;
	printf("Number of elements	:%i\n", ft_lstsize(head));
	while (ptr != NULL)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	printf("\n");

	ptr = head;
	while (ptr != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}

	printf("\n[END]\n\n");
}

*/
