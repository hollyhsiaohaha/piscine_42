/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <yhsiao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:03:00 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/13 09:57:58 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_base_format(char *str);
int	ft_atoi_base(char *str, char *base);
int	ft_position_in_base(char c, char *str);
int	ft_strlen(char *str);
int	ft_log(int nbr, int base_nbr);
int	ft_power(int nb, int power);

int	ft_atoi_base(char *str, char *base)
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
	while (ft_position_in_base(str[i], base) >= 0)
	{
		nb = nb * ft_base_format(base) + ft_position_in_base(str[i], base);
		i ++;
	}
	nb = nb * dash_nb;
	return (nb);
}

unsigned int	ft_negatvie_handleing(char *nbr_to, int nbr, int	*i)
{
	unsigned int	unsigned_nbr;

	if (nbr < 0)
	{	
		nbr_to[*i] = '-';
		unsigned_nbr = (unsigned int)nbr * (-1);
		*i = *i + 1;
	}
	else
		unsigned_nbr = (unsigned int)nbr;
	return (unsigned_nbr);
}

void	ft_putnbr_base(char *nbr_to, int nbr, char *base)
{
	int				i;
	int				base_len;
	int				log;
	int				this_nbr;
	unsigned int	unsigned_nbr;

	base_len = ft_strlen(base);
	log = ft_log(nbr, base_len);
	i = 0;
	unsigned_nbr = ft_negatvie_handleing(nbr_to, nbr, &i);
	while (log >= 0)
	{
		this_nbr = unsigned_nbr / ft_power(base_len, log);
		if (unsigned_nbr / ft_power(base_len, log))
			nbr_to[i] = base[this_nbr];
		else
			nbr_to[i] = base[0];
		unsigned_nbr = unsigned_nbr - this_nbr * ft_power(base_len, log);
		log--;
		i++;
	}
	nbr_to[i] = '\0';
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*nbr_to;

	if (!(ft_base_format(base_from) && ft_base_format(base_to)))
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	nbr_to = (char *)malloc(ft_log(nb, ft_strlen(base_to)) + 3);
	if (nbr_to == NULL)
		return (0);
	ft_putnbr_base(nbr_to, nb, base_to);
	return (nbr_to);
}

/* 
#include <stdio.h>
int	main(int argc, char *argv[])
{
	char	*str;

	str = ft_convert_base("-2147483647", "0123456789", "0123456789abcdef");
	printf("%s", str);
	free(str);
	return (0);
}
 */
/* 
#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	printf("42:%s\n", ft_convert_base("--2a", "0123456789abcdef", "0123456789"));
	printf("-2a:%s\n", ft_convert_base("-42", "0123456789", "0123456789abcdef"));
}
 */