/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 10:04:56 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/02 10:04:58 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_row(int l, char side, char middle)
{
	int	a;

	if (l > 0)
	{
		ft_putchar(side);
	}
	if (l > 1)
	{
		a = 0;
		while (a < l - 2)
		{
			ft_putchar(middle);
			a++;
		}
		ft_putchar(side);
	}
}

void	print_body(int x, int y)
{
	int	b;

	b = 0;
	while (b < y - 2)
	{
		ft_putchar('\n');
		print_row(x, 'B', ' ');
		b++;
	}
}

void	rush(int x, int y)
{
	if (y == 0)
	{
		return ;
	}
	if (y > 0)
	{
		print_row(x, 'A', 'B');
	}
	if (y > 1)
	{
		print_body(x, y);
		ft_putchar('\n');
		print_row(x, 'C', 'B');
	}
	ft_putchar('\n');
}
