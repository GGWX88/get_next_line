/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggan <ggan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 15:58:05 by ggan              #+#    #+#             */
/*   Updated: 2026/01/23 15:58:09 by ggan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

//==========================main=============================
/*

int	main(void)
{
	t_list	*nodee;

	nodee = ft_lstnew("test");
	printf("Input	:test\n");
	printf("content	:%s\n", (char *)nodee->content);
	printf("next	:%p\n\n", nodee->next);
	free(nodee);

	nodee = ft_lstnew("a");
	printf("Input	:a\n");
	printf("content	:%s\n", (char *)nodee->content);
	printf("next	:%p\n\n", nodee->next);
	free(nodee);

	int	num = 94;
	int *ptr;
	ptr = &num;
	nodee = ft_lstnew(ptr);
	printf("Input	:94\n");
	printf("content	:%i\n", *(int *)nodee->content);
	printf("next	:%p\n\n", nodee->next);
	free(nodee);

	long	num1 = 2147483649;
	long	*ptr3;
	ptr3 = &num1;
	nodee = ft_lstnew(ptr3);
	printf("Input	:%li\n", *ptr3);
	printf("content	:%li\n", *(long *)nodee->content);
	printf("next	:%p\n\n", nodee->next);
	free(nodee);

	float	flt1 = 4.9696969;
	float *ptr2;
	ptr2 = &flt1;
	nodee = ft_lstnew(ptr2);
	printf("Input	:%.6f\n", flt1);
	printf("content	:%.6f\n", *(float *)nodee->content);
	printf("next	:%p\n\n", nodee->next);
	free(nodee);

	double	flt = 94.69696969696969;
	double *ptr1;
	ptr1 = &flt;
	nodee = ft_lstnew(ptr1);
	printf("Input	:%.14f\n", flt);
	printf("content	:%.14f\n", *(double *)nodee->content);
	printf("next	:%p\n\n", nodee->next);
	free(nodee);

	nodee = ft_lstnew(NULL);
	printf("Input	:NULL\n");
	printf("content	:%p\n", nodee->content);
	printf("next	:%p\n\n", nodee->next);
	free(nodee);
}

*/
