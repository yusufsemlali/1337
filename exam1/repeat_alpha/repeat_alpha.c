#include <unistd.h>

int letter_index(char c)
{
    int i = 0;
    if (c >= 'a' && c <= 'z')
        i = c - 96;
    else if(c >= 'A' && c <= 'Z')
        i = c - 64;
	else
		write(1, &c, 1);
    return i;
}

void    repeat_alpha(char *str)
{
    int i = 0;
    while(str[i])
    {
        int x = letter_index(str[i]);
        while(x > 0)
        {
            write(1, &str[i], 1);
			x--;
        }
    i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        repeat_alpha(av[1]);
    }
    write(1, "\n", 1);
}
