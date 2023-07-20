/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:07:16 by yhsiao            #+#    #+#             */
/*   Updated: 2023/06/29 19:07:18 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str ++ ;
		count ++;
	}
	return (count);
}

// #include <stdio.h>
// int main(void)
// {
// 	char	*ptr;
// 	ptr = "abc";
// 	printf("%i", ft_strlen(ptr));
// }