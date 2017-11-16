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
	size_t j;
	size_t res;

	i = 0;
	j = 0;
	while (dst[i] != 0)
		i++;
	while (src[j] != 0)
		j++;
	if (size <= i + 1 || size == 0)
		res = j + size;
	else
		res = i + j;
	j = 0;
	if (size != 0)
	{
		while (src[j] != 0 && i < size - 1)
		{
			dst[i + j] = src[j];
			j++;
		}
	}
	else
	{
		while (src[j] != 0)
		{
			dst[i + j] = src[j];
			j++;
		}
	}
	dst[i + j] = 0;
	return (res);
}


/*
size_t i;
	size_t j;
	size_t res;

	i = 0;
	j = 0;
	while (dst[i] != 0)
		i++;
	while (src[j] != 0)
		j++;
	if (size <= i + 1 || size == 0)
		res = j + size;
	else
		res = i + j;
	j = 0;
	while (src[j] != 0 && i < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = 0;
	return (res);

*/