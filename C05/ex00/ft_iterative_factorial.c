/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:38:49 by ysemlali          #+#    #+#             */
/*   Updated: 2023/08/26 19:43:56 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	while (nb)
	{
		i *= nb;
		nb--;
	}
	return (i);
}
/*
int	main(void)
{
	int	nb;
	int	result;

	nb = 5;
	result = ft_iterative_factorial(nb);
	printf("%d", result);
	return (0);
}*/
