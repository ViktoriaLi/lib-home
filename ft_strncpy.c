/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 20:10:37 by vlikhotk          #+#    #+#             */
/*   Updated: 2017/11/02 21:08:43 by vlikhotk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
/*	while (src[i] != 0)
		i++;
	if (i < len)
		while (i != 0)
		{
			dst[j] = src[i];
			i--;
			j++;
		}
	while (dst[j] != 0)
		j++;
	if (j < len)
	{
		tmp = j;
		j = 0;
		i = 0;
		while (j < tmp)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
	}*/

	while (src[i] != 0 && i < len && dst[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	if (src[i] == 0 && i != len - 1)
	{
		while (i < len)
		{
			dst[i] = 0;
			i++;
		}
	}
	else if (dst[i] == 0 && i != len - 1)
		dst[i] = 0;
	return (dst);
}
