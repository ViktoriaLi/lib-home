/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 15:04:41 by vlikhotk          #+#    #+#             */
/*   Updated: 2017/11/01 17:14:15 by vlikhotk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void ft_putchar(char c);
void ft_putstr(char const *s);
void ft_putendl(char const *s);
void ft_strclr(char *s);
void ft_striter(char *s, void (*f)(char *));
void test_ft_putstr(char *s);
int ft_strequ(char const *s1, char const *s2);
int ft_strnequ(char const *s1, char const *s2, size_t n);
void ft_putnbr(int n);

#endif 