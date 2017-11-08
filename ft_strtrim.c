/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:07:27 by vlikhotk          #+#    #+#             */
/*   Updated: 2017/11/08 13:07:30 by vlikhotk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		len;
	char	*dest;
	
	i = 0;
	j = 0;
	len = 0;
	while (s[i] != 0)
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			len++;
		i++;
	}
	i = 0;
	dest = malloc(sizeof(char) * len);
	while (s[i] != 0)
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			{
				dest[j] = (char)s[i];
				j++;
			}
			i++;
	}
	return (dest);
}
