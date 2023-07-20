/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 16:26:44 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/01 16:26:47 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	bool	swapped;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size - i - 1)
		{
			swapped = true;
			if (tab[j] > tab[j + 1])
			{
				ft_swap(&tab[j], &tab[j + 1]);
				swapped = true;
			}
			j ++;
		}	
		if (swapped == false)
			break ;
		i ++;
		j = 0;
	}
}

// #include <stdio.h>
// int main(void)
// {
// 	int int_arr[6] = {5, 10, 2, 13, 9, 10};
// 	int size = sizeof(int_arr) / sizeof(int_arr[0]);

//    	for(int i = 0; i < size; i++)
//     	printf("%i ", int_arr[i]);
// 	ft_sort_int_tab(int_arr, size);
// 	printf(" -> ");
// 	for(int i = 0; i < size; i++)
//     	printf("%i ", int_arr[i]);
// }