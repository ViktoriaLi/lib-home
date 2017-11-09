/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:13:39 by vlikhotk          #+#    #+#             */
/*   Updated: 2017/11/01 18:33:28 by vlikhotk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void negative_putnbr(n)
{
	int		d;
	int 	c;
	char	res;

	c = 1;
	d = -1 * n;
	n = -1 * n;
	res = 0;
	while (d > 9)
	{
		d = d / 10;
		c = c * 10;
	}
	write(1, "-", 1);
	while (c > 0 && n != 0)
	{
		res = (n / c) % 10 + '0';
		write(1, &res, 1);
		c = c / 10;
	}
}

void	ft_putnbr(int n)
{	
	int		d;
	int 	c;
	char	res;

	c = 1;
	d = n;
	res = 0;
	if (n >= 0 && n <= 9)
	{
		res = n + '0';
		write(1, &res, 1);
	}
	if (n < 0)
		negative_putnbr(n);
	while (d > 9)
	{
		d = d / 10;
		c = c * 10;
	}
	while (c > 0 && n != 0)
	{
		res = (n / c) % 10 + '0';
		write(1, &res, 1);
		c = c / 10;
	}
}


/*while (c > 0 && d != 0)
		{
			res = (d / c) % 10 + '0';
			write(1, &res, 1);
			d = d / 10;
			if (d < 10)
				write(1, &d, 1);
		}*/