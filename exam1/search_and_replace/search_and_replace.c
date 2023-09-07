#include<unistd.h>
int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return (i);
}
void    search_and_replace(char *s1, char *c1, char *c2)
{
    int i = 0;
    while(s1[i])
    {
        if (s1[i] == c1[0])
            s1[i] = c2[0];
        write(1, &s1[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 4)
    {
        if (ft_strlen(av[2]) == 1 && ft_strlen(av[3]) == 1)
        {
            search_and_replace(av[1], av[2], av[3]);
        }
    }
    write(1, "\n",1);
}