/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 06:25:15 by ysemlali          #+#    #+#             */
/*   Updated: 2023/09/06 06:25:20 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	get_len_num(int num, int len_base)
{
	int	i;

	i = 0;
	if (num < 0)
	{
		i++;
		num *= -1;
	}
	while (num >= len_base)
	{
		num /= len_base;
		i++;
	}
	i++;
	return (i);
}

int	get_length(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	check_error(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i])
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			return (0);
		if (str[i] == 45 || str[i] == 43)
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	find_num(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (i);
		i++;
	}
	return (-2);
}
