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

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t k;
	size_t res;

	i = 0;
	j = 0;
	k = 0;
	while (dst[i] != 0)
		i++;
	while (src[j] != 0)
		j++;
	if (size <= j)
		return (j + size);
	res = i + j;
	/*if (size < i))
		while (dst[i] != 0)
		{
			dst[i + k] = src[k];
			k++;
		}*/
	if (j < size - i)
	{
		while (src[k] != 0 && i < size)
		{
			dst[i + k] = src[k];
			k++;
		}
	}
	else
	{
		while ((i + k) < size - 1)
		{
			dst[i + k] = src[k];
			k++;
		}
	}
	/*if (j < size - i)
	{
		while ( k < j)
		{
			dst[i + k] = src[k];
			k++;
		}
	}
	else
	{
		while ( k < size - i - 1)
		{
			dst[i + k] = src[k];
			k++;
		}
	}*/
	/*
	if (j > size)
		
	if (size >= j)
	{
		
	}*/
	dst[i + k] = 0;
	return (res);
}



/*static void	ft_concat(char *dst, const char *src, size_t size, size_t res)
{
	size_t i;
	size_t j;
	size_t len;

	i = ft_strlen(dst);
	len = ft_strlen(src);
	j = 0;
	if (size != 0 || (size < i && i != 0))
		while (dst[i] != 0)
		{
			dst[i + j] = src[j];
			j++;
		}
	if (size == res || len > size)
		while ((i + j) < size - 1)
		{
			dst[i + j] = src[j];
			j++;
		}
	if (size != 0 && size != res && size >= len)
	{
		while (src[j] != 0 && i < size)
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
	if (size == 0 || (size < i && i != 0))
		res = j + size;
	else
		res = i + j;
	ft_concat(dst, src, size, res);
	return (res);
}*/

/*
static void	ft_concat(char *dst, const char *src, size_t size, size_t res)
{
	size_t i;
	size_t j;

	i = ft_strlen(dst);
	j = ft_strlen(src);
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
	while (src[j++])
		j++;
	if ((i != 0 && size < i) || size == 0)
		res = j + size;
	else
		res = i + j;
	if (size != 0 && size != res && size >= j)
	{
		j = 0;
		while (src[j] != 0 && i < size)
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = 0;
	}
	else
		ft_concat(dst, src, size, res);
	return (res);
}
*/

/*

static void	ft_concat(char *dst, const char *src, size_t size, size_t res)
{
	size_t i;
	size_t j;
	size_t len;

	i = ft_strlen(dst);
	len = ft_strlen(src);
	j = 0;
	if (size == 0 || (size < i && i != 0))
		while (dst[i] != 0)
		{
			dst[i + j] = src[j];
			j++;
		}
	if (size == res || len > size)
		while ((i + j) < size - 1)
		{
			dst[i + j] = src[j];
			j++;
		}
	if (size != 0 && size != res && size >= len)
	{
		while (src[j] != 0 && i < size)
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
	if (size == 0 || (size < i && i != 0))
		res = j + size;
	else
		res = i + j;
	ft_concat(dst, src, size, res);
	return (res);
}
*/
