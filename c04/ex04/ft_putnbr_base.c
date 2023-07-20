/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:25:34 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/06 11:48:59 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i ++;
	}
	return (i);
}

int	ft_base_format(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
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
		return (1);
	else
		return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (!ft_base_format(base))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		if (nbr <= -base_len)
			ft_putnbr_base(-(nbr / base_len), base);
		ft_putnbr_base(-(nbr % base_len), base);
	}
	else if (nbr < base_len)
	{
		write(1, &base[nbr], 1);
	}
	else
	{
		ft_putnbr_base(nbr / base_len, base);
		ft_putnbr_base(nbr % base_len, base);
	}
}

// #include <stdio.h>
// int		main(void)
// {
// 	write(1, "42:", 3);
// 	ft_putnbr_base(42, "0123456789");
// 	write(1, "\n2a:", 4);
// 	ft_putnbr_base(42, "0123456789abcdef");
// 	write(1, "\n-2a:", 5);
// 	ft_putnbr_base(-42, "0123456789abcdef");
// 	write(1, "\n:", 2);
// 	ft_putnbr_base(42, "");
// 	write(1, "\n:", 2);
// 	ft_putnbr_base(42, "0");
// 	write(1, "\n:", 2);
// 	ft_putnbr_base(42, "+-0123456789abcdef");
// 	write(1, "\n:", 2);
// 	ft_putnbr_base(42, "\t0123456789abcdef");
// 	write(1, "\n:", 2);
// 	ft_putnbr_base(-2147483648, "0123456789abcdef");
// 	write(1, "\n:", 2);
// 	ft_putnbr_base(-2147483648, "01");
// 	write(1, "\n:", 2);
// 	ft_putnbr_base(-2147483648, "0123456789");
// 	write(1, "\n:", 2);
// 	ft_putnbr_base(2147483647, "0123456789");
// }
/*
#include <stdlib.h>
int	main(int argc, char** argv)
{
	if (argc > 1)
		ft_putnbr_base(atoi(argv[1]), argv[2]);
}
*/
