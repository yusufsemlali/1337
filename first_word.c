#include<unistd.h>

void	first_word(char *string)
{
	int i = 0;
	while(string[i])
	{
		while (string[i] == ' ' || (string[i] >= 9 && string[i] <= 13))
			i++;
		while (string[i] <= 'z' && string[i] >= 'A' )
		{
			write(1, &string[i], 1);

		i++;
		}

		break;
	}
}

int main(int ac, char **av)
{
	if ( ac == 2)
	{
		first_word(av[1]);
	}
	write(1, "\n", 1);
}
