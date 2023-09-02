#include<unistd.h>
void	putnbr(int i)
{
	if (i >= 10)
		putnbr(i / 10);
	i = ((i % 10) + '0');
	write(1, &i, 1);
}
int main (void)
{
	int i  = 1;
	while (i < 100)
	{
		if (i % 7 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 7 == 0)
			write(1, "fizz", 4);
		else if(i % 5 == 0)
			write(1, "buzz", 4);
		else
			putnbr(i);
		write(1, "\n",1 );
		i++;
	}
}
