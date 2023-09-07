/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:19:31 by ysemlali          #+#    #+#             */
/*   Updated: 2023/09/05 15:07:36 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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

int	total_count(char **strs, char *sep, int size)
{
	int	len;
	int	i;
	int	x;

	len = 0;
	x = 0;
	while (x < size)
	{
		i = 0;
		while (strs[x][i])
		{
			len++;
			i++;
		}
		x++;
	}
	i = 0;
	while (sep[i])
	{
		i++;
	}
	len += i * (size - 1);
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
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcpy(dest, strs[i]);
		dest += ft_str_len(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(dest, sep);
			dest += ft_str_len(sep);
		}
		i++;
	}
	*dest = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*out;
	int		ch_count;

	if (size <= 0)
	{
		out = malloc(sizeof(char));
		if (!out)
			return (0);
		*out = '\0';
		return (out);
	}
	else
	{
		ch_count = total_count(strs, sep, size);
		out = malloc(ch_count * sizeof(char));
		if (!out)
			return (0);
		concat(out, strs, sep, size);
		return (out);
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*sep;
	char	*result;
	char *strs[] = {"he", "wo", "h","wo"};
	sep = "what what ";
	result = ft_strjoin(4, strs, sep);
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	return (0);
}*/
