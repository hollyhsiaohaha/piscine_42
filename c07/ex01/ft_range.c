/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <yhsiao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:38:46 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/13 09:53:42 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
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
	return (ptr);
}

/* 
#include <stdio.h>
int	main(int argc, char *argv[])
{
	int	i;
	int	size;
	int	*int_array;
	if (argc == 3)
	{
		i = 0;
		int_array = ft_range(atoi(argv[1]),atoi(argv[2]));
		size = atoi(argv[2]) - atoi(argv[1]);
		while(i < size)
		{
			printf("%d\n", int_array[i]);
			i++;
		}
	free(int_array);
	}
} */
