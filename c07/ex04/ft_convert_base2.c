/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <yhsiao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:03:04 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/13 09:57:43 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

int	ft_log(int nbr, int base_nbr)
{
	int				i;
	unsigned int	unsigned_nbr;

	i = 0;
	if (nbr >= 0)
		unsigned_nbr = (unsigned int)nbr;
	else
		unsigned_nbr = (unsigned int)(-nbr);
	while (unsigned_nbr >= (unsigned int)base_nbr)
	{
		unsigned_nbr = unsigned_nbr / base_nbr;
		i++;
	}
	return (i);
}

int	ft_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_power(nb, power - 1));
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
			return (i);
		i ++;
	}
	return (-1);
}
