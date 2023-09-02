
#include<stdio.h>

int	ft_atoi(char *num)
{
	int i = 0;
	int output = 0;
	int sign = 1;
	if (num[i] == '-')
	{
		sign *= -1;
		i++;
	}	
	while(num[i])
	{
		output *= 10;
		output += num[i] - '0';
		i++;	
	}
	return (output * sign);
}
void	do_up(char *number1, char *operand, char *number2)
{
	int num = ft_atoi(number1);
	int num2 = ft_atoi(number2);
	if (operand[0] == '*')
		printf("%d" , num * num2);
	else if (operand[0] == '/' )
		printf("%d",  num / num2);
	else if (operand[0] == '+')
		printf("%d" ,num + num2);
	else if (operand[0] == '-')
		printf("%d", num - num2);
	else if (operand[0] == '%')
		printf("%d", num % num2);

}
int	main(int ac, char **av)
{
	if (ac == 4)
	{
		do_up(av[1],av[2],av[3]);
	}
		printf("\n");
}
