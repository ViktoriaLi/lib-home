/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 12:54:13 by vlikhotk          #+#    #+#             */
/*   Updated: 2017/11/04 12:54:23 by vlikhotk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	int		res;

	i = 0;
	if (little == NULL || little[i] == 0)
		return (char *)(big);
	while (big[i] != 0 && i < len)
	{
		res = i;
		j = 0;
		len = j + len;
		while (big[i + j] == little[j] && j < len && little[j] != 0 && big[i + j] != 0)
			j++;
		if (j == len || little[j] == 0)
			return (char*)(&big[res]);
		else
			i++;
	}
	return (NULL);
}


/*
size_t	i;
	size_t	j;
	int		res;

	i = 0;
	if (little == NULL || little[i] == 0)
		return (char *)(big);
	while (big[i] != 0 && i < len)
	{
		res = i;
		j = 0;
		len = j + len;
		while (big[i + j] == little[j] && j < len && little[j] != 0)
			j++;
		if (j == len || little[j] == 0)
			return (char*)(&big[res]);
		else
			i++;
	}
	return (NULL);
*/