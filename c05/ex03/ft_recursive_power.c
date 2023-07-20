/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <yhsiao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:53:05 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/13 15:49:24 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0 || nb == 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

/* 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d",ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
}
 */
