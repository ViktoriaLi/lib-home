/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:05:16 by vlikhotk          #+#    #+#             */
/*   Updated: 2017/11/08 13:05:21 by vlikhotk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	size_t			i;
	unsigned char	*dest;

	i = 0;
	dest = malloc(sizeof(unsigned char) * size);
	if (dest == NULL)
		return (NULL);
	while (i < size)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
