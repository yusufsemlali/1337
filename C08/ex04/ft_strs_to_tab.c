/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 00:31:04 by ysemlali          #+#    #+#             */
/*   Updated: 2023/09/03 14:24:18 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>

int	count_size(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	size_t	len;
	char	*dest_array;

	i = 0;
	while (src[i])
		i++;
	len = i + 1;
	dest_array = malloc(sizeof(char) * len);
	if (!dest_array)
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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*copy;
	
	int			i;
	int			size;

	i = 0;
	size = ac + 1;
	copy = malloc(sizeof(t_stock_str) * size);
	if (!copy)
		return (NULL);
	while (i < ac)
	{
		copy[i].size = count_size(av[i]);
		copy[i].str = av[i];
		copy[i].copy = ft_strdup(av[i]);
		i++;
	}
	copy[i].str = 0;
	return (copy);
}
