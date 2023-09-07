/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 06:19:11 by ysemlali          #+#    #+#             */
/*   Updated: 2023/09/06 06:19:13 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		get_len_num(int num, int len_base);
int		get_length(char *str);
int		check_error(char *str);
int		find_num(char c, char *str);

int	get_sign(char *str, int *index)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*index = i;
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	index;
	int	num1;
	int	num2;
	int	sign;
	int	base_len;

	base_len = get_length(base);
	index = 0;
	sign = get_sign(str, &index);
	num1 = 0;
	num2 = find_num(str[index], base);
	while (num2 != -2)
	{
		num1 = (num1 * base_len) + num2;
		index++;
		num2 = find_num(str[index], base);
	}
	return (num1 * sign);
}

void	ft_putnbr_base(int num, char *base, int len_base, char *final_number)
{
	long	n;
	int		i;
	int		len_number;

	n = num;
	i = 0;
	len_number = get_len_num(num, len_base);
	if (n < 0)
	{
		final_number[0] = '-';
		n *= -1;
		i = 1;
	}
	len_number--;
	while (n >= len_base)
	{
		final_number[len_number] = base[n % len_base];
		n /= len_base;
		len_number--;
	}
	if (n < len_base)
		final_number[i] = base[n];
}

char	*ft_convert_base(char *number, char *from_base, char *to_base)
{
	int		num;
	int		len_base;
	int		len_number;
	char	*final_number;

	if (check_error(from_base) == 0 || check_error(to_base) == 0)
		return (0);
	num = ft_atoi_base(number, from_base);
	len_base = get_length(to_base);
	len_number = get_len_num(num, len_base);
	final_number = (char *)malloc((len_number + 1) * sizeof(char));
	if (!final_number)
		return (0);
	ft_putnbr_base(num, to_base, len_base, final_number);
	final_number[len_number] = '\0';
	return (final_number);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;
// 	char	*base;
// 	char	*base_to;
// 	char	*result;

// 	str = "101010";
// 	base = "01";
// 	base_to = "0123456789ABCDEF";
// 	result = ft_convert_base(str, base, base_to);
// 	printf("%s\n", str);
// 	printf("%s\n", result);
// 	return (0);
// }