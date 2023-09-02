int	is_a_power_of_2(unsigned int n)
{
	unsigned int i = 2;
	if (n == 2 || n == 1)
		return 1;
	while( i <= (n / 2) && i < 46340)
	{		if ( i * i == n)
				return 1;
		i++;
	}
	return (0);
}
int main(void)
{	unsigned	int n = 2;
	int result = is_a_power_of_2(n);
	printf("%d", result);
}
