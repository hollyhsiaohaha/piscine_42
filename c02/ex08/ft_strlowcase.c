/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 11:42:43 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/02 11:42:46 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_uppercase(str[i]))
		{
			str[i] = str[i] + ('a' - 'A');
		}
		i ++ ;
	}
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char test_str[100] = "AfsojJfsdoC";
// 	printf("%s", ft_strlowcase(test_str));
// }