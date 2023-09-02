#include <unistd.h>

int main (int argc, char **argv)
{
	int length;
	int index1;
	int index2;

	index1 = 0;
	index2 = 0;
	length = 0;
	if (argc == 3)
	{
		while (argv[1][index1] && argv[2][index2])
		{
			if (argv[1][index1] == argv[2][index2])
				index1++;
			index2++;
		}
		if (argv[1][index1] == '\0')
		{
			while(argv[1][length])
				write(1, &argv[1][length++], 1);
		}			
	}
	write(1, "\n", 1);
	return (0);
}
