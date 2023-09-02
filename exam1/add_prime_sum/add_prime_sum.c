#include<unistd.h>
int is_prime(int nb)
{
	int a = 2;
	while (a <= (nb / 2) && a <= 46340)
	{
		if (nb % a == 0)
			return (0);
		a++;
	}
	return (1);
}

void	putnbr(int num)
{
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num > 9)
		putnbr(num / 10);
	char digit = (num % 10) + '0';
	write(1, &digit, 1);
}	

int ft_atoi(char *num)
{
	int i = 0;
	int number = 0;
	int sign = 1;
	if (num[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while(num[i] <= '9' && num[i] >= '0')
	{
		number *= 10;
		number += num[i] - '0';		
		i++;
	}
	return (number * sign);
}

void	add_prime_sum(int num)
{
	int a = 2;
	int result = 0;

	if (num < 0)
	{
		write(1, "0", 1);
		return;
	}
	while(a <= num)
	{
		if (is_prime(a))
			result += a;
		a++;
	}
	putnbr(result);
	return;
}
	


int	main(int ac, char **av)
{
	if (ac == 2)
	{
		add_prime_sum(ft_atoi(av[1]));
	}
	else if (ft_atoi(av[1]) >= 0)
		write(1, "0", 1);
	write(1, "\n", 1);
}

