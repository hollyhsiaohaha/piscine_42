/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <yhsiao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:30:06 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/13 12:35:18 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ptr;

	i = 0;
	if (min >= max)
		return (0);
	ptr = (int *)malloc((max - min) * sizeof(int));
	if (ptr == NULL)
		return (0);
	while (i < max - min)
	{
		ptr[i] = min + i;
		i++;
	}
	*range = ptr;
	return (i);
}

/* 
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	size;
	int	*int_array;

	int_array = NULL;
	if (argc == 3)
	{
		i = 0;
		size = ft_ultimate_range(&int_array,atoi(argv[1]),atoi(argv[2]));
		while (i < size)
		{
			printf("%d\n", int_array[i]);
			i++;
		}
	}
	free(int_array);
}
 */
