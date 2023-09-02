#include<unistd.h>
void    alpha_merror(char *str)
{
    int i = 0;
	char x;
    while(str[i])
    {
        if ((str[i] >= 'a' && str[i] <= 'z'))
            x = 'm' - (str[i] - 'n');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			x = 'M' - (str[i] - 'N');
		else
			x = str[i];
		write(1, &x ,1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        alpha_merror(av[1]);
    }
    write(1, "\n", 1);
}
