/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 11:49:44 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/02 11:49:46 by yhsiao           ###   ########.fr       */
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

int	ft_char_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	ft_char_is_alphanumeric(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_char_is_alphanumeric(str[i - 1]))
		{
			if (ft_char_is_lowercase(str[i]))
			{
				str[i] = str[i] - ('a' - 'A');
			}
		}
		else
		{
			if (ft_char_is_uppercase(str[i]))
			{
				str[i] = str[i] + ('a' - 'A');
			}
		}
		i ++ ;
	}
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char test_str[100] = "42mots quarante-deux; cinquante+et+un";
// 	printf("%s", ft_strcapitalize(test_str));
// }