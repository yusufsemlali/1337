/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:48:23 by ysemlali          #+#    #+#             */
/*   Updated: 2023/08/27 22:14:18 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr_of_ints;
	int	size;

	if (min >= max)
		return (NULL);
	size = max - min;
	arr_of_ints = (int *)malloc(size * sizeof(int));
	if (!arr_of_ints)
		return (0);
	i = 0;
	while (i < size)
	{
		arr_of_ints[i] = min;
		min++;
		i++;
	}
	return (arr_of_ints);
}
