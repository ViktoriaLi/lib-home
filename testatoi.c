/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 12:19:25 by vlikhotk          #+#    #+#             */
/*   Updated: 2017/11/04 12:26:50 by vlikhotk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int				i;
	int				sign;
	long int		res;
	const char		*d;

	i = 0;
	sign = 1;
	res = 0;
	d = str;
	while (d[i] == ' ' || d[i] == '\n' || d[i] == '\t' || d[i] == '\v' || d[i] == '\f' || d[i] == '\r')
		i++;
	if (d[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (d[i] == '+')
		i++;
	while (d[i] >= '0' && d[i] <= '9')
	{
		if (res < -2147483648)
			return (-2147483648);
		else if (res > 2147483647)
			return (2147483647);
		else
		{
			res = res * 10 + sign * (d[i] - '0');
			i++;
		}
	}
		return (res);
}
