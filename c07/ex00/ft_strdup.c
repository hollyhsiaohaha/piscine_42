/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <yhsiao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:45:36 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/19 13:51:07 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
}

char	*ft_strdup(char *src)
{
	char	*ptr;

	ptr = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (ptr == NULL)
		return ("");
	ft_strcpy(ptr, src);
	return (ptr);
}


#include <stdio.h>
int	main(void)
{
	char* s1 = "Hello";
	char* s2 = ft_strdup(s1);
	printf("%s\n", s1);
	printf("%p\n", s1);
	printf("%s\n", s2);
	printf("%p\n", s2);
	free(s2);	
}

