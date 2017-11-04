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
	j = 0;
	if (little[i] == 0 || &little[i] == NULL)
		return (char *)(big);
	while (big[i] != 0 && i < len)
	{
		if (big[i] == little[j])
		{
			res = i;
			len = j + len;
			while (big[i] == little[j] && j < len && big[i] != 0 && little[j] != 0)
			{
				i++;
				j++;
			}
			if ((j == len - 1) || little[j] == 0)
				return (char*)(&big[res]);
		}
		i++;
	}
	return (NULL);
}
