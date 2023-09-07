/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:02:50 by ysemlali          #+#    #+#             */
/*   Updated: 2023/09/04 12:15:12 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	ft_strlen(char *str);
int		ft_check(char *base);
int		ft_sign(char *str, int *i2);
int		base_index(char str, char *base);
int		count_number_len(int nbr, int base_len);

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

void	ft_putnbr_base(int nbr, char *base, int b_len, char *out)
{
	long	num;
	int		i;
	int		n_len;

	num = nbr;
	n_len = count_number_len(num, ft_check(base));
	i = 0;
	if (num < 0)
	{
		out[0] = '-';
		num *= -1;
		i = 1;
	}
	n_len--;
	while (num >= b_len)
	{
		out[n_len] = base[num % b_len];
		num /= b_len;
		n_len--;
	}
	if (num < b_len)
		out[i] = base[num];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				n;
	unsigned int	tab_size;
	char			*ch_arr;
	int				base_len;

	n = ft_atoi_base(nbr, base_from);
	if (n == 0)
		return ("0");
	tab_size = count_size(n, ft_check(base_to));
	base_len = ft_check(base_to);
	ch_arr = malloc(sizeof(char) * (tab_size));
	if (!ch_arr)
		return (0);
	ft_putnbr_base(n, base_to, base_len, ch_arr);
	ch_arr[tab_size + 1] = '\0';
	return (ch_arr);
}

int	main(void)
{
	char	*str;
	char	*base;
	char	*base_to;
	char	*result;

	str = "101010";
	base = "01";
	base_to = "0123456789ABCDEF";
	result = ft_convert_base(str, base, base_to);
	printf("%s\n", str);
	printf("%s\n", result);
	return (0);
}