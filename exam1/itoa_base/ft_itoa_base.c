


#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa_base(int val, int base)
{
	char	*base_string = "0123456789ABCDEF";
	long	num;
	int	len;
	char	*ret;

	num = val;
	len = 0;
	if (val == 0)
		return ("0");
	while (num)
	{
		len++;
		num /= base;
	}
	num = val;
	if (val < 0)
	{
		if (base == 10)
			len++;
		num *= -1;
	}
	ret = (char *)malloc(sizeof(char) * len);
	ret[len] = '\0';
	while (num)
	{
		printf("%ld\n", num);
		ret[--len] = base_string[num % base];
		num /= base;
	}
	if (val < 0 && base == 10)
	ret[0] = '-';
	return (ret);
}

char	*ft_itoa(int val)
{
	return (ft_itoa_base(val, 10));	
}


#include<stdio.h>
int main(void)
{
    int num = 1234;
    int base = 10;
    char  *res = ft_itoa_base(num , base);
    printf("%s \n", res);
}
