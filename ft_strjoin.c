/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:07:10 by vlikhotk          #+#    #+#             */
/*   Updated: 2017/11/08 13:07:13 by vlikhotk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*fs1;
	
	i = 0;
	j = 0;
	fs1 = (char *)s1;
	while (fs1[i] != 0)
		i++;
	while (s2[j] != 0)	
		j++;
	fs1 = malloc(sizeof(char) * (j + i - 1));
	if (fs1 == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != 0)
	{
		fs1[i] = (char)s1[i];
		i++;
	}
	while (s2[j] != 0)
	{
		fs1[i] = (char)s2[j];
		i++;
		j++;
	}
	fs1[i] = 0;
	return (fs1);
}
