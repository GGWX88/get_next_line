/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggan <ggan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 15:58:15 by ggan              #+#    #+#             */
/*   Updated: 2026/01/23 15:58:19 by ggan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	if (lst != NULL)
	{
		while (lst != NULL)
		{
			len++;
			lst = lst->next;
		}
	}
	return (len);
}

//==========================main=============================
/*

int	main(void)
{
	t_list *ptr;
	t_list *head;
	t_list *node0;
	t_list *node1;
	t_list *node2;
	t_list *node3;
	int	len;

	node0 = ft_lstnew("one");
	node1 = ft_lstnew("two");
	node2 = ft_lstnew("three");
	node3 = ft_lstnew("four");

	len = ft_lstsize(NULL);
	printf("size: %i\n", len);
	ptr = NULL;
	while (ptr != NULL && ptr->next != NULL)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	if (ptr != NULL)
		printf("%s\n", (char *)ptr->content);
	printf("\n");

	head = NULL;
	len = ft_lstsize(head);
	printf("size: %i\n", len);
	ptr = NULL;
	while (ptr != NULL && ptr->next != NULL)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	if (ptr != NULL)
		printf("%s\n", (char *)ptr->content);
	printf("\n");

	head = node0;
	len = ft_lstsize(head);
	printf("size: %i\n", len);
	ptr = head;
	while (ptr != NULL && ptr->next != NULL)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	if (ptr != NULL)
		printf("%s\n", (char *)ptr->content);
	printf("\n");

	ft_lstadd_back(&head, node1);
	len = ft_lstsize(head);
	printf("size: %i\n", len);
	ptr = head;
	while (ptr != NULL && ptr->next != NULL)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	if (ptr != NULL)
		printf("%s\n", (char *)ptr->content);
	printf("\n");

	ft_lstadd_back(&head, node2);
	len = ft_lstsize(head);
	printf("size: %i\n", len);
	ptr = head;
	while (ptr != NULL && ptr->next != NULL)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	if (ptr != NULL)
		printf("%s\n", (char *)ptr->content);
	printf("\n");

	ft_lstadd_back(&head, node3);
	len = ft_lstsize(head);
	printf("size: %i\n", len);
	ptr = head;
	while (ptr != NULL && ptr->next != NULL)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	if (ptr != NULL)
		printf("%s\n", (char *)ptr->content);
	printf("\n");

	ptr = head;
	while (ptr != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}

	printf("\n[END]\n\n");

	t_list	*l;
	t_list	*head;
	t_list	*ptr;

	l = NULL;
	head = l;
	ptr = head;
	int len = ft_lstsize(head);
	printf("size: %i\n", len);
	ptr = head;
	while (ptr != NULL)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	printf("\n");

	ft_lstadd_front(&head, ft_lstnew((void*)1));

	ptr = head;
	len = ft_lstsize(head);
	printf("size: %i\n", len);
	printf("\n");

	ft_lstadd_front(&head, ft_lstnew((void*)2));

	ptr = head;
	len = ft_lstsize(head);
	printf("size: %i\n", len);
	printf("\n");

	ptr = head;
	while (ptr != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}


}

*/
