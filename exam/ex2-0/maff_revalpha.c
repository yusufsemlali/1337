#include <unistd.h>

int main(void)
{
	char a = 'z';
	char b = 'Z';

	while (a >= 'a')
	{
		if (a % 2 == 0)
		{
			write(1, &a, 1);
		}
		else
		{
			write(1, &b, 1);
		}
		a--;
		b--;
	}
	write(1, &"\n", 1);
	return 0;
}
