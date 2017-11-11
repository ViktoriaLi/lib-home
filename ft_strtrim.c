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
	char	*dest;
	int start_spaces;
	int end_spaces;

	i = 0;
	j = 0;
	start_spaces = 0;
	end_spaces = 0;
	if (s == NULL)
		return (NULL);
	while (s[start_spaces] == ' ' || s[start_spaces] == '\n' || s[start_spaces] == '\t')
		start_spaces++;
	while (s[i] != 0)
	{
		i++;
	}
	i = i - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	if (!(dest = (char *)malloc(sizeof(char) * (i - start_spaces + 1))))
		return (NULL);
	while (s[i] != 0)
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
		{
			dest[j] = (char)s[i];
			j++;
		}
		i++;
	}
	dest[j] = 0;
	return (dest);
}

/*{
	int		i;
	int		j;
	int		len;
	char	*dest;

	i = 0;
	j = 0;
	len = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] != 0)
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			len++;
		i++;
	}
	i = 0;
	if (!(dest = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[i] != 0)
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
		{
			dest[j] = (char)s[i];
			j++;
		}
		i++;
	}
	dest[j] = 0;
	return (dest);
}*/