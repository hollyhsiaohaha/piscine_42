/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 20:03:55 by hel-hari          #+#    #+#             */
/*   Updated: 2023/07/02 20:30:55 by hel-hari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_things(int l, char beg, char middle, char end)
{
	int	a;

	if (l > 0)
	{
		ft_putchar(beg);
	}
	if (l > 1)
	{
		a = 0;
		while (a < l - 2)
		{
			ft_putchar(middle);
			a++;
		}
		ft_putchar(end);
	}
}

void	print_body(int x, int y)
{
	int	b;

	b = 0;
	while (b < y - 2)
	{
		ft_putchar('\n');
		print_things(x, 'B', ' ', 'B');
		b++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (y > 0)
	{
		print_things(x, 'A', 'B', 'C');
	}
	if (y > 1)
	{
		print_body(x, y);
		print_things(x, 'A', 'B', 'C');
		ft_putchar('\n');
	}
}
