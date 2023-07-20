/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:54:44 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/09 20:54:48 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscrapers.h"

int	main(int argc, char *argv[])
{
	int	i;
	int	**grid;
	int	*view_nb_array;

	i = 0;
	if (argc == 2 && check_string_duo(argv[1]) && check_string(argv[1]))
	{
		create_empty_grid(&grid);
		view_nb_array = (int *)malloc(16 * sizeof(int));
		str_to_int_array(argv[1], &view_nb_array);
		solve(&grid, 0, 0, view_nb_array);
		write_final_grid(grid);
		free(grid);
		free(view_nb_array);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
