#include <stdlib.h>
#include <string.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new_list;
	//new_list = NULL;

	new_list = malloc(sizeof(t_list));
	if (new_list)
	{
		if(!(new_list->content = malloc(content_size)))
			{
				free (new_list);
				return (NULL);
			}
		new_list->content = (char *)content;
		new_list->content_size = content_size;
		new_list->next = NULL;
		return (new_list);
	}
	if (content == NULL)
	{
		new_list->content = NULL;
		new_list->content_size = 0;
		//list.next = NULL;
	}
	return (NULL);
}

/*t_list *new_list;
	//list = NULL;

	new_list = malloc(sizeof(t_list) * content_size);
	if (new_list && content)
	{
		new_list->content = (char *)content;
		new_list->content_size = content_size;
		new_list->next = NULL;
		return (new_list);
	}
	if (content == NULL)
	{
		new_list->content = NULL;
		new_list->content_size = 0;
		//list.next = NULL;
	}
	return (NULL);*/