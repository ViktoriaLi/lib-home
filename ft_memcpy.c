/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 18:05:06 by vlikhotk          #+#    #+#             */
/*   Updated: 2017/11/04 14:21:18 by vlikhotk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d_temp;
	unsigned char	*s_temp;

	i = 0;
	d_temp = (unsigned char *)dest;
	s_temp = (unsigned char *)src;
	while (i < n)
	{
		d_temp[i] = s_temp[i];
		i++;
	}
	dest = d_temp;
	return (dest);
}
