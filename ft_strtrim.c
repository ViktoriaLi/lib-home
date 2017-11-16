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
	int i;
	int start;
	int end;
	int k;
	char *res;

	i = 0;
	k = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (!s)
		return (NULL);
	start = i;
	while (s[i] != 0)
		i++;
	while (i > start - 1 && (s[i] == 0 || s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i--;
	end = i;
	if (!(res = (char *)malloc(sizeof(char) * (end - start + 2))))
		return (NULL);
	while (k < end - start + 1)
	{
		res[k] = (char)s[start + k];
		k++;
	}
	res[k] = 0;
	return (res);
}


/*
char	*ft_strtrim(char const *s)
{
	int i;
	int start;
	int end;
	int k;
	char *res;

	i = 0;
	k = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	//if (s[i] == 0)
		//return ("");
	start = i;
	while (s[i] != 0)
		i++;
	while (i > start - 1 && (s[i] == 0 || s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i--;
	end = i;
	if (!(res = (char *)malloc(sizeof(char) * (end - start + 2))))
		return (NULL);
	while (k < end - start + 1)
	{
		res[k] = (char)s[start + k];
		k++;
	}
	res[k] = 0;
	return (res);
*/