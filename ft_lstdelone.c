/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalkan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:49:15 by zalkan            #+#    #+#             */
/*   Updated: 2023/02/14 15:45:41 by zalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

#include <stdio.h>

void	del(void *content)
{
	free(content);
}

int main()
{
	t_list *node1,*node2,*node3;

	node1 =(t_list *)malloc(sizeof(t_list));
	node2 =(t_list *)malloc(sizeof(t_list));
	node3 =(t_list *)malloc(sizeof(t_list));

	node2->next=node3;
	node1->content=node2;
	node1->content=ft_strdup("sdad");
	node2->content=ft_strdup("fbndkbs");
	node3->content=ft_strdup("sfdsf");

	ft_lstdelone(node1,(void *)(*del));

	printf("%s" ,(char *)node1->content);
	printf("%s" ,(char *)node2->content);
	printf("%s" ,(char *)node3->content);

}
	
