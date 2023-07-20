/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <yhsiao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:38:59 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/13 15:48:57 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power == 0)
		return (1);
	else if (power < 0 || nb == 0)
		return (0);
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

/* 
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
}
 */
