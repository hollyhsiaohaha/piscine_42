/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:04:58 by yhsiao            #+#    #+#             */
/*   Updated: 2023/06/28 20:05:00 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_numbers(int i, int j)
{
	char	c1;
	char	c2;
	char	c3;
	char	c4;

	c1 = '0' + (i / 10);
	c2 = '0' + (i % 10);
	c3 = '0' + (j / 10);
	c4 = '0' + (j % 10);
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, " ", 1);
	write(1, &c3, 1);
	write(1, &c4, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			print_numbers(a, b);
			if (a == 98 && b == 99)
			{
				break ;
			}
			write(1, ", ", 1);
			b ++;
		}
		a ++;
	}
}
