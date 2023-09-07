#include <stdlib.h>

char	*ft_itoa(int nbr)
{
    char *str;
    long num = nbr;
    int len;

    len = (nbr <= 0 ? 2 : 1);
    while(nbr && len++)
        nbr /= 10;
    if(!(str =(char *)malloc(sizeof(char ) * len)))
        return (0);

    str[--len] = '\0';
    if (num <= 0)
        str[0] = (num < 0 ? '-' : '0');
    while (num)
    {
        str[--len] = (num < 0 ? -num : num) % 10 + '0';
        num /= 10;
    }    
    return (str);
}
#include<stdio.h>
int main(void)
{
    int i = -55;
    char *string = ft_itoa(i);
    printf("%s \n", string);
}