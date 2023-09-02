char	*ft_strcpy(char *s1, char *s2)
{
	int	i = 0;

	if (s2[i] == '\0')
		return s1;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return s1;
}
#include<stdio.h>

int main(void)
{
	char ch[] = "12345";
	char ch2[] = "56789";

	printf("%s", ft_strcpy(ch2, ch));
	return 0;
}
