/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:11:40 by yhsiao            #+#    #+#             */
/*   Updated: 2023/06/30 11:11:48 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char	str1[10];
// 	char	str2[10];
// 	strcpy(str1, "12345");
// 	strcpy(str2, "abcde");
// 	printf("%s,%s->", str1, str2);
// 	ft_strcpy(str2, str1);
// 	printf("%s,%s", str1, str2);
// }