/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 14:02:34 by yhsiao            #+#    #+#             */
/*   Updated: 2023/06/30 14:02:36 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
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
// 	printf("%i", ft_str_is_printable(test_str));
// }