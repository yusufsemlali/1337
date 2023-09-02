/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:10:26 by ysemlali          #+#    #+#             */
/*   Updated: 2023/08/27 13:11:56 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	index;
	long	i;

	i = nb;
	if (i <= 0)
		return (0);
	if (i == 1)
		return (1);
	index = 2;
	if (i >= 2)
	{
		while (index * index <= i)
		{
			if (index * index == i)
				return (index);
			index++;
		}
	}
	return (0);
}
