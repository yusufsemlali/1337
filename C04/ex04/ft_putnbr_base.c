/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:21:11 by ysemlali          #+#    #+#             */
/*   Updated: 2023/08/30 13:34:41 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
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
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	nb;

	if (nbr == 0)
	{
		ft_putchar(base[0]);
		return ;
	}
	nb = (long int)nbr;
	if (!ft_check(base))
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb != 0)
	{
		if (nb / ft_strlen(base) != 0)
			ft_putnbr_base(nb / ft_strlen(base), base);
		ft_putchar(base[nb % ft_strlen(base)]);
	}
}

int main()
{
    int number = 1234567;

    char decimalBase[] = "0123456789";
    char hexBase[] = "0123456789ABCDEF";
    char octalBase[] = "01234567";
    char binaryBase[] = "01";

    printf("Decimal:  ");
	printf("\n");
    ft_putnbr_base(number, decimalBase);
    printf("\n");
    printf("Hexadecimal: ");
	printf("\n");
    ft_putnbr_base(number, hexBase);
    printf("\n");
    printf("Octal: ");
	printf("\n");
    ft_putnbr_base(number, octalBase);
    printf("\n");
    printf("Binary: ");
	printf("\n");
    ft_putnbr_base(number, binaryBase);
    printf("\n");
    return 0;
}

