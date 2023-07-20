/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:59:28 by yhsiao            #+#    #+#             */
/*   Updated: 2023/06/30 12:59:31 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i ++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i ++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char	str1[10];
// 	char	str2[10];

// 	strcpy(str1, "aaa");
// 	strcpy(str2, "bbbbb");
// 	strncpy(str2, str1, 8);
// 	printf("%s,%s->", str1, str2);
// 	strcpy(str1, "aaa");
// 	strcpy(str2, "bbbbb");
// 	ft_strncpy(str2, str1, 8);
// 	printf("%s,%s", str1, str2);
// 	return (0);
// }