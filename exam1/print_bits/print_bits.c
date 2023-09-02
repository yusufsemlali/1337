#include <unistd.h>


void	print_bits( unsigned char octet)
{
	int oct = octet;
	int divide = 128;

	while(divide)
	{
		if (divide <= oct)
		{
			write(1, "1", 1);
			oct %= divide;
		}
		else 
			write(1, "0", 1);
		divide /= 2;
	}
}

int main(void)
{
    unsigned char c = 'a';
    print_bits(c);
    return (0);
}
