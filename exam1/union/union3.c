int found_before(char c, char *str, int in)
{
	int i = 0;
	while(i < in)
		{
			if (c == str[i])
				return 0;
			i++;
		}
	return 1;
}
int found_before2(char c, char *str)
{
	int i = 0;
	while(str[i])
		{
			if (c == str[i])
				return 0;
			i++;
		}
	return 1;
}

void	ft_union(char *s1, char *s2)
{
	int i = 0;
	while (s1[i])
	{
		if ( found_before(s1[i], s1 , i) == 1)
			write(1, &s1[i], 1);
		i++;
	}
	i = 0;
	while(s2[i])
	{
		if (found_before(s2[i], s2, i) == 1)
			if(found_before2(s2[i], s1))
				write(1, &s2[i], 1);
		i++;
	}
}


int	main(int ac, char **av)
{
	if(ac == 3)
	{
		ft_union(av[1], av[2]);
	}
	write(1, "\n", 1);
}
