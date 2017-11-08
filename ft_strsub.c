/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:06:57 by vlikhotk          #+#    #+#             */
/*   Updated: 2017/11/08 13:07:00 by vlikhotk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * len);
	if (dest == NULL)
		return (NULL);
	s = (char *)s;
	while (i < len)
	{
		dest[i] = s[start];
		i++;
		start++;
	}
	return (dest);
}
