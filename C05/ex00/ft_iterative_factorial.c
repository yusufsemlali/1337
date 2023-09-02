/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:38:49 by ysemlali          #+#    #+#             */
/*   Updated: 2023/08/30 17:53:24 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	while (nb > 0)
	{
		i *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
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
