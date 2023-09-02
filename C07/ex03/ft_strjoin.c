/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:19:31 by ysemlali          #+#    #+#             */
/*   Updated: 2023/09/01 22:08:47 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_str_len(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		index++;
	}
	return (index);
}

int	total_count(char *str, char sep, int size)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_str_len(str);
		i++;
	}
	if (sep != '\0')
	{
		len += (size - 1);
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	concat(char *dest, char **strs, char *sep, int size)
{
	char	*d;
	int		i;

	i = 0;
	d = dest;
	while (i < size)
	{
		ft_strcpy(d, strs[i]);
		d += ft_str_len(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(d, sep);
			d += ft_str_len(sep);
		}
		i++;
	}
	*d = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strings_cat;
	int		ch_count;

	if (size == 0)
	{
		strings_cat = (char *)malloc(1);
		if (!strings_cat)
			return (0);
		strings_cat[0] = '\0';
		return (strings_cat);
	}
	ch_count = total_count(*strs, *sep, size);
	strings_cat = (char *)malloc((ch_count + 1) * sizeof(char));
	if (!strings_cat)
		return (0);
	concat(strings_cat, strs, sep, size);
	return (strings_cat);
}
/*
int	main(void)
{
	char	*sep;
	char	*result;
	char *strs[] = {"Hello", "world", "how", "are", "you"};
	sep = "----";
	result = ft_strjoin(5, strs, sep);
	if (result)
	{
		printf("%s\n", result);
		free(result); 
	}
	return (0);
}*/
