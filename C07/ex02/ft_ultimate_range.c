/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:43:53 by ysemlali          #+#    #+#             */
/*   Updated: 2023/08/28 09:49:40 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr_of_ints;
	int	size;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	arr_of_ints = (int *)malloc(size * sizeof(int));
	if (!arr_of_ints)
		return (-1);
	while (i < size)
	{
		arr_of_ints[i] = min;
		min++;
		i++;
	}
	*range = arr_of_ints;
	return (size);
}
