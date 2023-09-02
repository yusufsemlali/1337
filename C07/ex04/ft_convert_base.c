/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:02:50 by ysemlali          #+#    #+#             */
/*   Updated: 2023/09/02 18:11:59 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	ft_strlen(char *str);
int		ft_check(char *base);
int		ft_sign(char *str, int *i2);
int		base_index(char str, char *base);

void	ft_putnbr_base(int nbr, char *base, char *arr)
{
	long	nb;
	int		i;

	i = 0;
	nb = (long)nbr;
	if (!ft_check(base))
		return ;
	if (nb < 0)
	{
		arr[0] = '-';
		i++;
		nb = -nb;
	}
	if (nb / ft_strlen(base) != 0)
		ft_putnbr_base(nb / ft_strlen(base), base, arr + i + 1);
	arr[i++] = base[nb % ft_strlen(base)];
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
	base_len = ft_check(base);
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

int	count_size(int n, int base_len)
{
	int	num;
	int	size;

	num = n;
	size = 0;
	if (num < 0)
	{
		num = -num;
		size++;
	}
	while (n != 0)
	{
		size++;
		n /= base_len;
	}
	return (size);
}

void	ft_strrev(char *arr, int size)
{
	char	temp;
	int		i;

	i = 1;
	while (i < size)
	{
		temp = arr[i];
		arr[i] = arr[size];
		arr[size] = temp;
		i++;
		size--;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				n;
	unsigned int	tab_size;
	char			*ch_arr;

	n = ft_atoi_base(nbr, base_from);
	if (n == 0)
		return ("0");
	tab_size = count_size(n, ft_check(base_to));
	ch_arr = malloc(sizeof(char) * (tab_size + 1));
	if (!ch_arr)
		return (0);
	ft_putnbr_base(n, base_to, ch_arr);
	ch_arr[tab_size] = '\0';
	ft_strrev(ch_arr, tab_size - 1);
	printf("\n| %d  >    %d >    %s ", n, tab_size, ch_arr);
	return (ch_arr);
}

int	main(void)
{
	char	*str;
	char	*base;
	char	*base_to;
	char	*result;

	str = "-11";
	base = "0123456789";
	base_to = "0123456789ABCDEF";
	result = ft_convert_base(str, base, base_to);
	printf(" \n string: %s\n", str);
	printf("result: %s\n", result);
	return (0);
}
