/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:05:56 by ysemlali          #+#    #+#             */
/*   Updated: 2023/08/28 17:12:04 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	size_t	len;
	char	*dest_array;

	i = 0;
	while (src[i])
	{
		i++;
	}
	len = i + 1;
	dest_array = (char *)malloc(len * sizeof(char));
	if (dest_array == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		dest_array[i] = src[i];
		i++;
	}
	dest_array[i] = '\0';
	return (dest_array);
}
