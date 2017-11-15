/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 13:00:37 by vlikhotk          #+#    #+#             */
/*   Updated: 2017/11/04 13:01:05 by vlikhotk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;
	int res;

	i = 0;
	j = 0;
	if (little[i] == 0 || &little[i] == NULL)
		return (char *)(big);
	while (big[i] != 0)
	{
		if (big[i] == little[j] && big[i + 1] == little[j + 1])
		{	
			res = i;
			while (big[i] == little[j] && little[j] != 0)
			{
				i++;
				j++;
			}
			if (little[j] == 0)
				return (char *)(&big[res]);
			else
			{
				i++;
				j = 0;
			}
		}
		i++;
	}
	return (NULL);
}


/*

*/

/*
int i;
	int j;
	int k;
	int res;
	char *result;

	i = 0;
	j = 0;
	k = 0;
	if (little[i] == 0 || &little[i] == NULL)
		return (char *)(big);
	while (big[i] != 0)
	{
		if (big[i] == little[j] && big[i + 1] == little[j + 1])
		{
			res = i;
			while (big[i] == little[j] && big[i] != 0 && little[j] != 0)
			{
				result[k] = big[i] ;
				k++;
				i++;
				j++;
			}
			result[k] = 0;
			return (result);
		}
		i++;
	}
	return (NULL);
*/

/*
int i;
	int j;
	int k;
	int res;
	char *result;

	i = 0;
	j = 0;
	k = 0;
	if (little[i] == 0 || &little[i] == NULL)
		return (char *)(big);
	while (big[i] != 0)
	{
		if (big[i] == little[j] && big[i + 1] == little[j + 1])
		{
			res = i;
			while (big[i] == little[j] && big[i + 1] == little[j + 1])
			{
				result[k] = big[i];
				k++;
				i++;
				j++;
			}
			if (big[i] != 0)
			{
				while (big[i] != 0)
				{
					result[k] = big[i];
					k++;
					i++;
				}
				result[k] = 0;
				return (result);
			}
		}
		i++;
	}
	return (NULL);
*/