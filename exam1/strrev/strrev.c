void	strrev(char *str)
{
	int i = 0;
	char temp;
	int j = 0;
	while(str[j])
		j++;
	j--;
	while(i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	printf("%s", str);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		strrev(av[1]);
	}
	write(1, "\n", 1);
}
