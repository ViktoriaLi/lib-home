/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:29:49 by vlikhotk          #+#    #+#             */
/*   Updated: 2017/11/09 13:30:17 by vlikhotk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_itoa(int n)
{
	int		d;
	int 	len;
	char	sign;
	char	*dest;

	d = n;
	len = 1;
	while (d > 9)
	{
		d = d / 10;
		len++;
	}
	d = n;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	dest[len--] = 0;
	while (len >= 0)
	{
		dest[len] = d % 10 + '0';
		d = d / 10;
		len--;
	}
	return (dest);
}

