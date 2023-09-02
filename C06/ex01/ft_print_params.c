/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:32:35 by ysemlali          #+#    #+#             */
/*   Updated: 2023/08/27 16:37:10 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	put_char(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	x;

	x = 1;
	while (x < argc)
	{
		i = 0;
		while (argv[x][i])
		{
			put_char(argv[x][i]);
			i++;
		}
		put_char('\n');
		x++;
	}
	return (0);
}
