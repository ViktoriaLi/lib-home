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

static char	**mainsplit(char const *s, char **dest, char c, int i)
{
	int k;
	int j;
	int start;

	j = 0;
	while (s[i] != 0)
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i] != 0)
				i++;
			if (!(dest[j] = (char *)malloc(sizeof(char) * (i - start + 1))))
			{
				j = j - 1;
				while ( j >= 0 )
				{
					free(dest[j]);
					j--;
				}
				return (NULL);
			}
			k = 0;
			while (k < i - start)
				dest[j][k] = s[start + k++];
			dest[j++][k] = 0;
		}
		i++;
	}
	return (dest);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		words;
	char	**dest;

	i = 0;
	words = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] != 0)
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
			words++;
		i++;
	}
	if (!(dest = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	i = 0;
	dest[words] = NULL;
	return (mainsplit(s, dest, c, i));
}
