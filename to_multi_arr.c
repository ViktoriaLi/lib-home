/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_multi_arr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 18:05:35 by vlikhotk          #+#    #+#             */
/*   Updated: 2017/12/11 18:10:04 by vlikhotk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	to_multi_arr(char *buf, char ****multi_arr, int strings, int symbols)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	l = 0;
	while (buf[l] != 0)
	{
		j = 0;
		while (j < strings)
		{
			k = 0;
			while (k < symbols)
			{
				(*multi_arr)[i][j][k] = buf[l++];
				k++;
			}
			l++;
			j++;
		}
		l++;
		i++;
	}
	return (i);
}
