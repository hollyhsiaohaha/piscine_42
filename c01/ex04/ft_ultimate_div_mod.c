/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 17:22:31 by yhsiao            #+#    #+#             */
/*   Updated: 2023/06/29 17:22:35 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	d;
	int	m;

	d = *a / *b;
	m = *a % *b;
	*a = d;
	*b = m;
}

// #include <unistd.h>
// int	main()
// {
// 	int i, j;
// 	char c1, c2;
// 	i = 7;
// 	j = 2;
// 	c1 = i + 48;
// 	c2 = j + 48;
// 	write(1, &c1, 1);
// 	write(1, &c2, 1);
// 	ft_ultimate_div_mod(&i, &j);
// 	c1 = i + 48;
// 	c2 = j + 48;
// 	write(1, &c1, 1);
// 	write(1, &c2, 1);
// 	return 0;
// }