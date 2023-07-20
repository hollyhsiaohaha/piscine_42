/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validating.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:54:26 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/09 20:54:28 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscrapers.h"

int	is_valid_row_col(int ***grid, int r, int c, int nb)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (nb == (*grid)[r][i])
			return (0);
		i ++;
	}
	i = 0;
	while (i < 4)
	{
		if (nb == (*grid)[i][c])
			return (0);
		i ++;
	}
	return (1);
}

void	creat_row_array(int ***grid, int r, int view_point, int array[4])
{
	int	i;

	i = 0;
	if (view_point == 1)
	{
		while (i < 4)
		{
			array[i] = (*grid)[r][i];
			i++;
		}
	}
	else
	{
		while (i < 4)
		{
			array[i] = (*grid)[r][3 - i];
			i++;
		}
	}
}

void	creat_col_array(int ***grid, int c, int view_point, int array[4])
{
	int	i;

	i = 0;
	if (view_point == 1)
	{
		while (i < 4)
		{
			array[i] = (*grid)[i][c];
			i++;
		}
	}
	else
	{
		while (i < 4)
		{
			array[i] = (*grid)[3 - i][c];
			i++;
		}
	}
}

int	view_count_row(int ***grid, int r, int view_point)
{
	int	j;
	int	blocked;
	int	i;
	int	view_count;
	int	array[4];

	view_count = 1;
	creat_row_array(grid, r, view_point, array);
	i = 1;
	while (i < 4)
	{
		j = i - 1;
		blocked = 0;
		while (j >= 0)
		{
			if (array[i] < array[j])
				blocked = 1;
			j --;
		}
		if (!blocked)
			view_count++;
		i ++;
	}
	return (view_count);
}

int	view_count_col(int ***grid, int c, int view_point)
{
	int	j;
	int	blocked;
	int	i;
	int	view_count;
	int	array[4];

	view_count = 1;
	creat_col_array(grid, c, view_point, array);
	i = 1;
	while (i < 4)
	{
		j = i - 1;
		blocked = 0;
		while (j >= 0)
		{
			if (array[i] < array[j])
				blocked = 1;
			j --;
		}
		if (!blocked)
			view_count++;
		i ++;
	}
	return (view_count);
}
