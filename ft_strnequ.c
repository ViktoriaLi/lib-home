/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 16:11:29 by vlikhotk          #+#    #+#             */
/*   Updated: 2017/11/01 20:07:49 by vlikhotk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != 0)
		i++;
	while (s2[j] != 0)
		j++;
	if (i != j)
		return (0);
	while (s1[k] != 0 || k != (n - 1))
	{
		if (s1[k] != s2[k])
			return (0);
		k++;
	}
	return (1);
}
