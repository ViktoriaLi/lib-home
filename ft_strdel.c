/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:06:05 by vlikhotk          #+#    #+#             */
/*   Updated: 2017/11/08 13:06:09 by vlikhotk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	ft_strdel(char **as)
{
	/*char *tmp = *as;
	free(as);
	as = NULL;*/
	char *tmp;
	tmp = *as;
	free(tmp);
	tmp = NULL;
	*as = tmp;
}
