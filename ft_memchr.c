/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 15:35:23 by vlikhotk          #+#    #+#             */
/*   Updated: 2017/11/04 15:51:24 by vlikhotk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*tmp;

	i = 0;
	tmp = NULL;
	tmp = (unsigned char *)s;
	/*if (c < 0 || c > 127 || n == 0)
		return (NULL);*/
	if (n != 0)
	{
		while (tmp[i] != (unsigned char)c && i < n && tmp[i] != 0)
			i++;
		if (tmp[i] == (unsigned char)c)
			return (void *)(&tmp[i]);
	}
	return (NULL);
}
