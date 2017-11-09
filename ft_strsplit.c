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

/*static int		words_calc(char const *s, char c)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (s[i] != 0)
	{ 
		if ((i == 0 || s[i - 1] == c) && s[i] != c) 
			words++; 
		i++;
	}
	return (words);
}*/

char	**ft_strsplit(char const *s, char c)
{
	int i;
	int j;
	int k;
	int chars;
	int start;
	int words;
	char **dest;

	i = 0;
	j = 0;
	k = 0;
	chars = 0;
	start = 0;
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
	i = 0;	
	while (s[i] != 0)
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
		{
			start = i;
			while (s[i] != c)
			{
				chars++;
				i++;
			}
			dest[j] = (char *)malloc(sizeof(char) * (chars + 1));
			if (dest[j] == NULL)
				return (NULL);
			while (s[start] != c)
			{
				dest[j][k] = s[start];
				start++;
				k++;
			}
			dest[j][k] = 0;
			chars = 0;
			k = 0;
			j++;
		}
		i++;
	}
	dest[j] = NULL;
	return (dest);
}

