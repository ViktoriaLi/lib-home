/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 18:39:53 by vlikhotk          #+#    #+#             */
/*   Updated: 2017/11/02 15:03:26 by vlikhotk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst1;
	unsigned char	*src1;

	i = 0;
	if (n != 0)
	dst1 = NULL;
	src1 = NULL;
	{
		src1 = (unsigned char *)src;
		dst1 = (unsigned char *)dst;
		while (src1[i] != (unsigned char)c && i < n)
		{
			dst1[i] = src1[i];
			i++;
		}
		if (src1[i] == (unsigned char)c)
		{
			dst1[i] = src1[i];
			dst = (void *)dst1;
			return (&dst[i + 1]);
		}
	}
	return (NULL);
}
