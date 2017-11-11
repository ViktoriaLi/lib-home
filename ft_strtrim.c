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
	if (!(dest = (char *)malloc(sizeof(char) * (i - start_spaces + 2))))
		return (NULL);
	while (start_spaces != i - start_spaces + 2)
	{
		dest[j] = (char)s[start_spaces];
		start_spaces++;
		j++;
	}
	dest[j] = 0;
	return (dest);
}
