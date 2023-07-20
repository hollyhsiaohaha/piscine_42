/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 09:30:04 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/04 10:33:17 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char			c;
	unsigned int	i;

	if (nb < 0)
	{
		write(1, "-", 1);
		i = nb * (-1);
	}
	else
		i = nb;
	if (i < 10)
	{
		c = '0' + i;
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(i / 10);
		c = '0' + (i % 10);
		write(1, &c, 1);
	}
}

// #include <stdio.h>

// void	ft_putnbr(int nb);

// int		main(void)
// {
// 	ft_putnbr(42);
// 	printf("\n");
// 	ft_putnbr(-42);
// 	printf("\n");
// 	ft_putnbr(-2147483648);
// 	printf("\n");
// 	ft_putnbr(2147483647);
// 	printf("\n");
// }