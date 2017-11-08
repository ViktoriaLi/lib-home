/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:06:44 by vlikhotk          #+#    #+#             */
/*   Updated: 2017/11/08 13:06:47 by vlikhotk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int 			i;
	int 			len;
	unsigned char	*dest;

	i = 0;
	s = (unsigned char *)s;
	while (s[i] != 0)
		i++;
	len = i + 1;
	i = 0;
	dest = malloc(sizeof(unsigned char) * len);
	while (i < len)
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = 0;
	return (dest);
}
