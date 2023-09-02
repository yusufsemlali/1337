#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

int base_check(char *base)
{
    int i = 0;
    int j;
    
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-' || base[i] == ' ' || base[i] > 126)
            return 0;
        i++;
    }
    
    i = 0;
    while (base[i])
    {
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return 0;
            j++;
        }
        i++;
    }
    
    return 1;
}

int ft_sign(char *str)
{
    int i = 0;
    int sign = 1;
    
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
        
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    
    return sign;
}

int ft_base(char str, char *base)
{
    int nb = 0;
    
    while (base[nb] != '\0')
    {
        if (str == base[nb])
            return nb;
        nb++;
    }
    
    return -1;
}

int ft_atoi_base(char *str, char *base)
{
    int i = 0;
    int sign = 1;
    int num = 0;
    int num2;
    int base_ok;
    int base_length;
    
    if (str[i] != '\0' && ft_strlen(base) >= 2)
    {
        sign = ft_sign(str);
        base_length = ft_strlen(base);
        base_ok = base_check(base);
        if (base_ok)
        {
            while (str[i] != '\0')
            {
                num2 = ft_base(str[i], base);
                if (num2 != -1)
                {
                    num = (num * base_length) + num2;
                    i++;
                }
                else
                {
                    break;
                }
            }
            return num * sign;
        }
    }
    
    return 0;
}

int main()
{
    char *str = "1010"; // Input string representing the number
    char *base = "01";  // Custom base for binary numbers
    
    int result = ft_atoi_base(str, base);
    
    printf("Input string: %s\n", str);
    printf("Converted result: %d\n", result);
    
    return 0;
}

