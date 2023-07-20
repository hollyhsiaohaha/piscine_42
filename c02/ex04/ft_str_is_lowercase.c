/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:56:39 by yhsiao            #+#    #+#             */
/*   Updated: 2023/06/30 13:56:44 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
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
// 	printf("%i", ft_str_is_lowercase(test_str));
// }