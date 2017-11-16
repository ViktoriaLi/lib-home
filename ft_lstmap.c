/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:00:51 by vlikhotk          #+#    #+#             */
/*   Updated: 2017/11/16 16:00:54 by vlikhotk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_list;

	if (!(new_list = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	while (lst)
	{
		new_list = f(lst);
		new_list = new_list->next;
		lst = lst->next;
	}
	new_list->next = NULL;
	return (new_list);
}

/*
t_list *new_list;

	if (!(new_list = (t_list *)malloc(sizeof(t_list))));
		return (NULL);
	while (lst)
	{
		if (f(lst) != NULL)
			new_list = f(lst);
		else
		{
			free(new_list);
			return (NULL);
		}
		new_list = new_list->next;
		lst = lst->next;
	}
	new_list->next = NULL;
	return (new_list);
*/
