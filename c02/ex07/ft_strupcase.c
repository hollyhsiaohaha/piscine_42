/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 20:23:56 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/01 20:24:00 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_lowercase(str[i]))
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i ++ ;
	}
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char test_str[100] = "AfsojJfsdoC";
// 	printf("%s", ft_strupcase(test_str));
// }