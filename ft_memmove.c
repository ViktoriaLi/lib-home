/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 15:23:42 by vlikhotk          #+#    #+#             */
/*   Updated: 2017/11/04 15:33:32 by vlikhotk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dst1;
	unsigned char	*src1;

	i = 0;
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	while (i < len)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst1);
}
