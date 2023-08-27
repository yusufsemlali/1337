/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 20:59:08 by ysemlali          #+#    #+#             */
/*   Updated: 2023/08/26 21:08:09 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	output;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	output = nb;
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (output);
}
