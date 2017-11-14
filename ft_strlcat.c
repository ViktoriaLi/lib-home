/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 16:37:16 by vlikhotk          #+#    #+#             */
/*   Updated: 2017/11/04 17:00:52 by vlikhotk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len;
	size_t j;

	i = 0;
	j = 0;
	if (size != 0 && src)
	{ 
		while (dst)
			i++;
		len = size - i + 1;
		while (len < size)
		{
			dst[i] = src[j];
			len++;
			i++;
			j++;
		}
		dst[i] = 0;
		i = 0;
		while (dst)
			i++;
		return (i + 1);
	}
	return (0);
}
