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
#include "libft.h"

static void	ft_concat(char *dst, const char *src, size_t size, size_t res)
{
	size_t i;
	size_t j;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	if (size != 0 && size != res && size >= j)
	{
		j = 0;
		while (src[j] != 0 && i < size)
		{
			dst[i + j] = src[j];
			j++;
		}
	}
	if (size == 0 || (i != 0 && size < i))
	{
		j = 0;
		while (dst[i] != 0)
		{
			dst[i + j] = src[j];
			j++;
		}
	}
	if (size == res || j > size)
	{
		j = 0;
		while ((i + j) < size - 1)
		{
			dst[i + j] = src[j];
			j++;
		}
	}
	dst[i + j] = 0;
}

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t res;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j])
		j++;
	if ( (i != 0 && size < i) || size == 0)
		res = j + size;
	else
		res = i + j;
	ft_concat(dst, src, size, res);
	return (res);
}

/*
size_t i;
	size_t j;

	j = 0;
	i = ft_strlen(dst);
	if (size != 0 && size != res)
		while (src[j] != 0 && i < size)
		{
			dst[i + j] = src[j];
			j++;
		}
	if (size == 0)
		while (dst[i] != 0)
		{
			dst[i + j] = src[j];
			j++;
		}
	if (size == res)
		while ((i + j) < size - 1)
		{
			dst[i + j] = src[j];
			j++;
		}
	dst[i + j] = 0;
*/

/*
size_t i;
	size_t j;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	if (size != 0 && size != res && size >= j)
		while (src[j] != 0 && i < size)
		{
			j = 0;
			dst[i + j] = src[j];
			j++;
		}
	if (size == 0)
		while (dst[i] != 0)
		{
			j = 0;
			dst[i + j] = src[j];
			j++;
		}
	if (size == res || j > size)
	{
		j = 0;
		while ((i + j) < size - 1)
		{
			dst[i + j] = src[j];
			j++;
		}
	}
	dst[i + j] = 0;
}

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
	if (size <= i || size == 0)
		res = j + size;
	else
		res = i + j;
	ft_concat(dst, src, size, res);
	return (res);
*/