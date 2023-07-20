/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <yhsiao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:08:41 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/13 18:22:54 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_array(int array[10])
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = array[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_cell_valid(int array[10], int row, int col)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (array[i] == col)
			return (0);
		if (i + array[i] == row + col)
			return (0);
		if (i - array[i] == row - col)
			return (0);
		i++;
	}
	return (1);
}

int	ft_solve(int array[10], int row, int col)
{
	int	solutions;

	if (row == 10)
	{
		ft_print_array(array);
		return (1);
	}
	solutions = 0;
	while (col < 10)
	{
		if (ft_cell_valid(array, row, col))
		{
			array[row] = col;
			solutions += ft_solve(array, row + 1, 0);
		}
		col++;
	}
	return (solutions);
}

int	ft_ten_queens_puzzle(void)
{
	int	solution_array[10];
	int	i;

	i = ft_solve(solution_array, 0, 0);
	return (i);
}

/* 
#include <stdio.h>

int	main(void)
{
	printf("%d\n",ft_ten_queens_puzzle());
	return (0);
}
 */