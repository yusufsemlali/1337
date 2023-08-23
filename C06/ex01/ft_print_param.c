#include<unistd.h>

void	put_char(char *c)
{
	int	i;

	i = 0;
	while(c[i])
	{
		write(1 ,&c[i] , 1);
		i++;
	}
}
int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while(i < argc)
	{
		put_char(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
