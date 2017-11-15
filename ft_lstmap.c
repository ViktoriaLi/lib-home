#include <stdlib.h>
#include <string.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
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