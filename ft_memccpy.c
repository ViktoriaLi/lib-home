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
	int						i;
	unsigned char			*dst1;
	const unsigned char		*src1;
	
	i = 0;
	src1 = src;
	dst1 = dst;
	while (i < n && src1[i] != c)
	{
		dst1[i] = src1[i];
		i++;
	}
	if (src1[i] == c)
	{
		dst1[i] = src1[i];
		dst = dst1;
		return (&dst[i + 1]);
	}
	return NULL;
}
