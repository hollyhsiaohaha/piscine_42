/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_empty_grid.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 23:14:04 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/09 23:14:10 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscrapers.h"

void	create_empty_grid(int	***grid_ptr)
{
	int	i;
	int	j;

	i = 0;
	(*grid_ptr) = (int **)malloc(4 * sizeof(int *));
	while (i < 4)
	{
		(*grid_ptr)[i] = (int *)malloc(4 * sizeof(int));
		i++;
	}
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			(*grid_ptr)[i][j] = 0;
			j++;
		}
		i++;
	}
}
