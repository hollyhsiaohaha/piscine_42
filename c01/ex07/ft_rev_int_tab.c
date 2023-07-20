/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:15:27 by yhsiao            #+#    #+#             */
/*   Updated: 2023/06/29 19:15:33 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	swap_idx;

	counter = 0;
	swap_idx = 0;
	while (counter < (size / 2))
	{
		swap_idx = size - counter - 1;
		ft_swap(tab + counter, tab + swap_idx);
		counter ++;
	}	
}

// #include <stdio.h>
// int main(void)
// {
// 	int int_arr[6] = {5, 6, 7, 8, 9, 10};
// 	int size = sizeof(int_arr) / sizeof(int_arr[0]);

//    	for(int i = 0; i < size; i++)
//     	printf("%i ", int_arr[i]);
// 	ft_rev_int_tab(int_arr, size);
// 	printf(" -> ");
// 	for(int i = 0; i < size; i++)
//     	printf("%i ", int_arr[i]);
// }