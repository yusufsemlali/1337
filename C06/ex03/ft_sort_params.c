int	count_len(char *len)
{
	int	i;

	i=0;
	while(len[i])
	{
		i++;
	}
	return (i);
}

void	ft_sort_tab(char *tab)
{
	int	i;
	int	e;
	int	temp;
	int len;
   
	len	= count_len(tab);
	i = 0;

	while (i < len - 1)
	{
		e = 0;
		while (e < len - i - 1)
		{
			if (tab[e] > tab[e + 1])
			{
				temp = tab[e];
				tab[e] = tab[e + 1];
				tab[e + 1] = temp;
			}
			e++;
		}
		i++;
	}
}
#include<unistd.h>

void	put_char(char *c)
{
	int	i;

	i = 0;
	while(c[i])
	{
		write(1 , &c[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while(i < argc)
	{
		ft_sort_tab(argv[i]);
		put_char(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
