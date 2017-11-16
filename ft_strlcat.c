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
	/*if (i >= size)
		return (j + size);*/
	res = i + j;
	j = 0;

	while (src[j] != 0 && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
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
	res = i + j;
	j = 0;

	while (src[j] != 0 && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (res);
*/