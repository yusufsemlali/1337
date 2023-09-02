/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:22:41 by ysemlali          #+#    #+#             */
/*   Updated: 2023/08/30 14:04:50 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' || base[i] > 126)
			return (0);
		i++;
	}
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_sign(char *str, int *i2)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	*i2 = i;
	return (sign);
}

int	base_index(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	num;
	int	index;
	int	sign;
	int	base_len;

	i = 0;
	num = 0;
	base_len = base_check(base);
	if (base_len >= 2)
	{
		sign = ft_sign(str, &i);
		index = base_index(str[i], base);
		while (index != -1)
		{
			num = (num * base_len) + index;
			i++;
			index = base_index(str[i], base);
		}
		return (num *= sign);
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*base;
	int		result;

	str = " ---+--+4553207";
	base = "01234567";
	result = ft_atoi_base(str, base);
	printf("string: %s\n", str);
	printf("result: %d\n", result);
	return (0);
}
