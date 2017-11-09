/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:09:33 by vlikhotk          #+#    #+#             */
/*   Updated: 2017/11/08 13:26:08 by vlikhotk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static char	**mainsplit(char const *s, char **dest, char c)
{
	int i;
	int k;
	int j;
	int start;

	i = 0;
	k = 0;
	j = 0;
	while (s[i] != 0)
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
		{
			start = i;
			while (s[i] != c)
				i++;
			dest[j] = (char *)malloc(sizeof(char) * (i - start));
			if (dest[j] == NULL)
				return (NULL);
			while (s[start] != c)
			{
				dest[j][k] = s[start];
				start++;
				k++;
			}
			dest[j][k] = 0;
			k = 0;
			j++;
		}
		i++;
	}
	dest[j] = NULL;
	return (dest);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		words;
	char	**dest;

	i = 0;
	words = 0;
	while (s[i] != 0)
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
			words++;
		i++;
	}
	dest = (char **)malloc(sizeof(char *) * (words + 1));
	if (dest == NULL)
		return (NULL);
	return (mainsplit(s, dest, c));
}
