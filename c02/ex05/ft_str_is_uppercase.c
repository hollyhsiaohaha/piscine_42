/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:59:01 by yhsiao            #+#    #+#             */
/*   Updated: 2023/06/30 13:59:10 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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
// 	printf("%i", ft_str_is_uppercase(test_str));
// }