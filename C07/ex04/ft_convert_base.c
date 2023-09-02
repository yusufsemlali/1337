#include "ft_convert_base2.c"

void    ft_putnbr_base(int nbr, char *base)
{
    long int    nb;

    if (nbr == 0)
    {
        ft_putchar(base[0]);
        return ;
    }
    nb = (long int)nbr;
    if (!ft_check(base))
        return ;
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb != 0)
    {
        if (nb / ft_strlen(base) != 0)
            ft_putnbr_base(nb / ft_strlen(base), base);
        malloc_result(base[nb % ft_strlen(base)]);
    }
}

int    ft_atoi_base(char *str, char *base)
{
    int    i;
    int    num;
    int    index;
    int    sign;
    int    base_len;

    i = 0;
    num = 0;
    base_len = ft_check(base);
    if (base_len >= 2)
    {
        sign = ft_sign(str, &i);
        index = base_index(str[i], base);
        while (index != -1)
        {
            num = (num * base_len) + index;
            i++;
            index = base_index(str[i], base);
        }
        return (num *= sign);
    }
    return (0);
}
