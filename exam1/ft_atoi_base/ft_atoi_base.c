int white_space_check(char c)
{
    if (c  <= 32)
        return 1;
    return 0;
}

int base_index(char c, int base)
{
    char low_base[] = "0123456789abcdef";
    char up_base[] = "0123456789ABCDEF";
    int i = 0;
    while(i < base)
    {
        if( c == low_base[i])
            return i;
        if(c == up_base[i])
            return i;
        i++;
    }
    return (-1);
}

int	ft_atoi_base(const char *str, int str_base )
{
    int i = 0;
    int num = 0;
    while (white_space_check(str[i]) == 1)
        i++;
    int sign = (str[i] == '-' ? -1: 1);
    (str[i] == '-' || str[i] == '+' ? i++ : 0 );
    while (str[i] != '\0' && base_index(str[i] , str_base) != -1)
    {
        num *= str_base;
        num += base_index(str[i] , str_base);
        i++;

    }
        
        

    return num * sign;
}


#include<stdio.h>
int main(void)
{
    char *num = "  \n \t          -1234a34     10010101000110100a1;;20";
    int base = 10;
    int res = ft_atoi_base(num , base);
    printf("%d \n", res);
}














// int isBlank(char c)
// {
//     if (c <= 32)
//         return (1);
//     return (0);
// }

// int		isvalid(char c, int base)
// {
//     char digits[17] = "0123456789abcdef";
//     char digits2[17] = "0123456789ABCDEF";
    
//     while (base--)
//         if (digits[base] == c || digits2[base] == c)
//             return (1);
//     return (0);
// }

// int		value_of(char c)
// {
//     if (c >= '0' && c <= '9')
//         return (c - '0');
//     else if (c >= 'a' && c <= 'f')
//         return (c - 'a' + 10);
//     else if (c >= 'A' && c <= 'F')
//         return (c - 'A' + 10);
//     return (0);
// }

// int		ft_atoi_base(const char *str, int str_base)
// {
//     int result;
//     int sign;
    
//     result = 0;
//     while (isBlank(*str))
//         str++;
//     sign = (*str == '-') ? -1 : 1;
//     (*str == '-' || *str == '+') ? ++str : 0;
//     while (isvalid(*str, str_base))
//         result = result * str_base + value_of(*str++);
//     return (result * sign);
// }


// #include<stdio.h>
// int main(void)
// {
//     char *num = "-------010-000234a34     10010101000110100a1;;20";
//     int base = 2;
//     int res = ft_atoi_base(num , base);
//     printf("%d \n", res);
// }
