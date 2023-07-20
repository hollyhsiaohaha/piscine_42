/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:38:29 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/07 12:15:03 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	dash_nb;
	int	nb;

	i = 0;
	dash_nb = 1;
	nb = 0;
	while (str[i] == ' ' || ('\t' <= str[i] && str[i] <= '\r'))
		i ++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			dash_nb *= -1;
		i ++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i ++;
	}
	nb = nb * dash_nb;
	return (nb);
}

// #include <stdio.h>

// int	ft_atoi(char *str);

// int	main(void)
// {
// 	printf("42:%d\n", ft_atoi("  \n  42t4457"));
// 	printf("-42:%d\n", ft_atoi(" --+-42sfs:f545"));
// 	printf("0:%d\n", ft_atoi("\0 1337"));
// 	printf("0:%d\n", ft_atoi("-0"));
// 	printf("0:%d\n", ft_atoi(" - 1 3 2 5 6 3 2 1 6 7"));
// 	printf("-1325632167:%d\n", ft_atoi("-1325632167"));
// 	printf("-100:%d\n", ft_atoi("-100"));
// 	printf("min:%d\n", ft_atoi("\t---+2147483648"));
// 	printf("max:%d\n", ft_atoi("\v2147483647"));
// 	printf("max:%d\n", ft_atoi("v2147483647"));
// 	printf("max:%d\n", ft_atoi("--v2147483647"));
// 	printf("max:%d\n", ft_atoi("v2147483647"));
// 	printf("max:%d\n", ft_atoi(" v2147483647"));
// 	printf("max:%d\n", ft_atoi("v 2147483647"));
// }
