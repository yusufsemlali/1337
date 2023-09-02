/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:16:35 by ysemlali          #+#    #+#             */
/*   Updated: 2023/08/27 17:27:37 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	compare_strings(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] || str2[i])
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
			i++;
	}
	return (0);
}

void	swap_strings(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = 1;
	while (x < argc - 1)
	{
		y = 1;
		while (y < argc - 1)
		{
			if (compare_strings(argv[y], argv[y + 1]) > 0)
				swap_strings(&argv[y], &argv[y + 1]);
			y++;
		}
		x++;
	}
	y = 1;
	while (y < argc)
	{
		print(argv[y]);
		write(1, "\n", 1);
		y++;
	}
	return (0);
}
