/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 12:05:58 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/02 12:06:00 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++ ;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i ++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char	str1[10];
// 	char	str2[10];
// 	int		i;

// 	i = 0;
// 	strcpy(str1, "aaa");
// 	strcpy(str2, "bbbbb");
// 	i = ft_strlcpy(str2, str1, 2);
// 	printf("%s,%s, %i", str1, str2, i);
// 	return (0);
// }