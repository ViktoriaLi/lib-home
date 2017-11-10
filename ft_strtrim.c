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
	if (s == NULL)
		return (NULL);
	while (s[i++] != 0)
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			len++;
	}
	i = 0;
	if (!(dest = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[i++] != 0)
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			dest[j++] = (char)s[i];
	}
	dest[j] = 0;
	return (dest);
}
