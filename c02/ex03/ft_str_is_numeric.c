/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:48:31 by yhsiao            #+#    #+#             */
/*   Updated: 2023/06/30 13:49:11 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return (0);
		}
		str ++ ;
	}
	return (1);
}

// #include <stdio.h>
// int main(void)
// {
// 	char test_str[10] = "";
// 	printf("%i", ft_str_is_numeric(test_str));
// }