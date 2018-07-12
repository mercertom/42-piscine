/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 20:13:07 by tmercer           #+#    #+#             */
/*   Updated: 2018/07/08 20:13:17 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H

# include <unistd.h>
# include <stdlib.h>

int		input_valid(char *str, int rows, int cols);
void	find_match(char *str);
int		count_rows(char *str);
int		count_cols(char *str);
int		str_match(char *s1, char *s2);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	write_rush(char rush, int rows, int cols, int first_match);
char	*rush_00(int x, int y);
char	*rush_01(int x, int y);
char	*rush_02(int x, int y);
char	*rush_03(int x, int y);
char	*rush_04(int x, int y);

#endif
