/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 23:06:08 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/09 23:06:54 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscrapers.h"

void	write_final_grid(int **array)
{
	int	i;
	int	j;
	int	int_to_char;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			int_to_char = array[i][j] - 1 + '0';
			write(1, &int_to_char, 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
