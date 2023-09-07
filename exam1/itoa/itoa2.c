#include<stdio.h>
#include<stdlib.h>
char     *ft_itoa(int nbr )
{
    int i = 0;
    long int n = nbr;
    char *result;

    i = (nbr <= 0 ? 2 : 1);
    while(nbr)
    {
        nbr /= 10;
        i++;
    }
    if (!(result =(char *)malloc(sizeof(char) * i)))
        return (0);
    result[i--] = '\0';
    if (n <= 0)
        result[0] = (n < 0 ? '-' : '0');
    while(n)
    {
        result[--i] = ( n <= 0 ? -n : n )% 10  + '0';
        n /= 10;
    }

    return result;

}
int main(void)
{
    int i = -133645;
    char *result = ft_itoa(i);
    printf(" %s \n", result);
}