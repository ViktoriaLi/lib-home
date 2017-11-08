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

char	**ft_strsplit(char const *s, char c)
{
	int i;
	int chars;
	int words;
	char **dest;

	i = 0;
	chars = 0;
	words = 0;
	while (s[i] != c)
		i++;
	while (s[i] != 0)
	{
		while (s[i] != c)
		{
			i++;
			chars++;
		}
		if (s[i] == c)
		{	
			words++;
			while (s[i] == c)
				i++;
		}
	}
	dest = malloc(sizeof(char) * (chars + words +c1));
	
}
