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

static char		*ft_negative_itoa(int n)
{
	int		d;
	int		len;
	char	*dest;

	len = 2;
	d = -1 * n;
	while (d > 9)
	{
		d = d / 10;
		len++;
	}
	d = -1 * n;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	dest[len--] = 0;
	while (len)
	{
		dest[len] = d % 10 + '0';
		d = d / 10;
		len--;
	}
	dest[len] = '-';
	return (dest);
}

char			*ft_itoa(int n)
{
	int		d;
	int		len;
	char	*dest;

	if (n < 0)
		return (ft_negative_itoa(n));
	len = 1;
	d = n;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	dest[len--] = 0;
	while (len >= 0)
	{
		dest[len] = d % 10 + '0';
		d = d / 10;
		len--;
	}
	return (dest);
}
