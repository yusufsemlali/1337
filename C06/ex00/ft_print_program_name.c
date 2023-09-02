/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 23:33:39 by ysemlali          #+#    #+#             */
/*   Updated: 2023/08/27 14:31:01 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*arg;

	i = 0;
	arg = argv[0];
	while (arg[i] && argc)
	{
		put_char(arg[i]);
		i++;
	}
	put_char('\n');
	return (0);
}
