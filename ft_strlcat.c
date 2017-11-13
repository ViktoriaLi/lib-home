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
	size_t ret_len;

	i = 0;
	if (len != 0 && dst != src)
	{
		while (dst)
			i++;
		len = size - i - 1;
		diff = dst - src;
		if (diff < 0)
			diff = -1 * diff;
		if (diff <= len)
		{
			while (len != 0)
			{
				dst[len] = src[len];
				len--;
			}
		}
		else
		{
			while (i < len)
			{
				dst[i] = src[i];
				i++;
			}
		}
		dst[i] = 0;
		while (dst)
			ret_len++; 
		return (ret_len + 1);
	}
	return (0);
}
