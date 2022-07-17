/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrujas-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:47:34 by jrujas-p          #+#    #+#             */
/*   Updated: 2022/07/10 21:16:58 by jrujas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void rush(int x, int y)
{
	int eje_x;
	int eje_y;

	eje_x = 1;//Horizontal 
	eje_y = 1;//Vertical 

	while (eje_y <= y)
	{
		while (eje_x <= x)
		{
			if ((eje_x == 1 && eje_y ==1) || (eje_x == 1 &&  eje_y == y))
				ft_putchar ('o');
			else if ((eje_x == x && eje_y == 1) || (eje_x == x && eje_y == y))
				ft_putchar ('o');
			else if ((eje_y == 1 || eje_y == y) && (eje_x != 1 || eje_x != x))
				ft_putchar ('-');
			else if ((eje_y != 1 || eje_y != y) && (eje_x ==1 || eje_x == x))
				ft_putchar ('|');
			else
				ft_putchar (' ');
			eje_x ++;
		}
		eje_x = 1;
		eje_y ++;
		ft_putchar ('\n');
	}
}