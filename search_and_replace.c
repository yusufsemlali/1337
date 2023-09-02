#include<unistd.h>
int	str_len(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}

void	search_and_replace(char *string, char *search, char *replace)
{
	if (str_len(search) == 1 && str_len(replace) == 1)
	{
		int i = 0;
		while (string[i])
		{	
			if (string[i] == *search)
				string[i] = *replace;
			write(1, &string[i], 1);
		i++;
		}
	}
	return;
}


int	main(int ac, char **av)
{
	if (ac == 4)
	{
		search_and_replace(av[1], av[2], av[3]);
	}
	write(1, "\n", 1);
}
