/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_view.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 23:26:05 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/09 23:26:10 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscrapers.h"

int	is_valid_row_view(int ***grid, int r, int view[16])
{
	int	left_view;
	int	right_view;

	left_view = view_count_row(grid, r, 1);
	right_view = view_count_row(grid, r, -1);
	if (left_view == view[8 + r] && right_view == view[12 + r])
		return (1);
	return (0);
}

int	is_valid_col_view(int ***grid, int c, int view[16])
{
	int	up_view;
	int	down_view;

	up_view = view_count_col(grid, c, 1);
	down_view = view_count_col(grid, c, -1);
	if (up_view == view[0 + c] && down_view == view[4 + c])
		return (1);
	return (0);
}
