#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
		char c;

	if (argc > 1)
	{
		write(1, "\n", 1);
	}
	else if (argc == 1)
	{
		char *arg = argv[1]; // Start iterating from the first argument
		i = 0;
		int print = 0; // Flag to indicate whether we're printing a word
		while (arg[i] != '\0')
		{
			c = arg[i]; // Accessing the character at index i
			if (!print)
			{
				if (c != ' ')
				{
					print = 1;
					write(1, &c, 1);
				}
			}
			else
			{
				if (c == ' ')
				{
					break ;
				}
				write(1, &c, 1);
			}
			i++;
		}
	}
	return (0);
}
