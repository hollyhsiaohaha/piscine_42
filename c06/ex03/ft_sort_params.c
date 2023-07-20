/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 09:41:10 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/09 14:39:16 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i ++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_str_delete(int argc, char *argv[], int argv_idx)
{
	int	i;

	i = argv_idx;
	while (i < argc - 1)
	{
		argv[i] = argv[i + 1];
		i++;
	}	
}

void	ft_sort_params(int argc, char *argv[])
{
	int	i;
	int	min_argv_idx;

	while (argc - 1)
	{
		i = 1;
		min_argv_idx = i;
		while (i < argc)
		{
			if (ft_strcmp(argv[min_argv_idx], argv[i]) > 0)
				min_argv_idx = i;
			i++;
		}
		ft_putstr(argv[min_argv_idx]);
		ft_str_delete(argc, argv, min_argv_idx);
		argc--;
	}
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
		ft_sort_params(argc, argv);
}
