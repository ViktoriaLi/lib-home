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
	int	i;
	int j;

	i = 0;
	j = 0;
	s1 = (char *)s1;
	s2 = (char *)s2;
	while (s1[i] != 0)
		i++;
	while (s2[j] != 0)	
		j++;
	s1 = malloc(sizeof(char) * (i + j - 1));
	if (dest == NULL)
		return (NULL);
	j = 0;
	while (s2[j] != 0)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = 0;
	return (s1);
}
