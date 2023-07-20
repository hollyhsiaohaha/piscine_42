/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_loop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:24:49 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/09 21:27:50 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "skyscrapers.h"

// int	solve(int ***grid, int r, int c, int view[16])
// {
// 	int	i;

// 	if (r == 4)
// 		return (1);
// 	else if (c == 4)
// 	{
// 		if (is_valid_row_view(grid, r, view))
// 			return (solve(grid, r + 1, 0, view));
// 		return (0);
// 	}
// 	else
// 	{
// 		i = 1;
// 		while (i++ < 5)
// 		{
// 			if (is_valid_row_col(grid, r, c, i))
// 			{
// 				(*grid)[r][c] = i;
// 				if (solve(grid, r, c + 1, view))
// 					return (1);
// 				(*grid)[r][c] = 0;
// 			}
// 		}
// 	}
// 	return (0);
// }

int	solve(int ***grid, int r, int c, int view[16])
{
	int	i;

	if (r == 4)
		return (1);
	else if (c == 4)
	{
		if (is_valid_row_view(grid, r, c, view))
			return (solve(grid, r + 1, 0, view));
		return (0);
	}
	else
	{
		i = 1;
		while (i < 5)
		{
			if (is_valid_row_col(grid, r, c, i))
			{
				(*grid)[r][c] = i;
				if (solve(grid, r, c + 1, view))
					return (1);
				(*grid)[r][c] = 0;
			}
			i++;
		}
	}
	return (0);
}
