/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 21:09:09 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/04 21:18:43 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_base_format(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		if (str[i] == ' ' || ('\t' <= str[i] && str[i] <= '\r'))
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j ++;
		}
		i ++;
	}
	if (i > 1)
		return (i);
	else
		return (0);
}

int	ft_position_in_base(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			return (i);
		}
		i ++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	dash_nb;
	int	nb;

	i = 0;
	dash_nb = 1;
	nb = 0;
	if (!ft_base_format(base))
		return (0);
	while (str[i] == ' ' || ('\t' <= str[i] && str[i] <= '\r'))
		i ++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			dash_nb *= -1;
		i ++;
	}
	while (ft_position_in_base(str[i], base) >= 0)
	{
		nb = nb * ft_base_format(base) + ft_position_in_base(str[i], base);
		i ++;
	}
	nb = nb * dash_nb;
	return (nb);
}

// #include <stdio.h>
// int	ft_atoi_base(char *str, char *base);

// int	main(void)
// {
// 	printf("42:%d\n", ft_atoi_base("2a", "0123456789abcdef"));
// 	printf("-42:%d\n", ft_atoi_base("   --------+-2a", "0123456789abcdef"));
// 	printf("42:%d\n", ft_atoi_base("   -+-2a", "0123456789abcdef"));
// 	printf("0:%d\n", ft_atoi_base("   --------+- 2a", "0123456789abcdef"));
// 	printf("0:%d\n", ft_atoi_base("   --------+-z", "0123456789abcdef"));
// 	printf("0:%d\n", ft_atoi_base("   --------+-2a", ""));
// 	printf("0:%d\n", ft_atoi_base("   --------+-2a", "0"));
// 	printf("0:%d\n", ft_atoi_base("   --------+-2a", "+-0"));
// 	printf("0:%d\n", ft_atoi_base("   --------+-2a", "\t01"));
// }