int	ft_strlen(char *str)
{
	int	i = 0;

	while(str[i])
	{
		i++;
	}
	return (i);
}
#include<stdio.h>

int	main(void)
{
	char ch[] = "abcdefgh";
	printf("%d" , ft_strlen(ch));
	return 0;
}
