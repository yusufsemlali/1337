#include<unistd.h>
int	find_double(char *str,char c, int in)
{	
	int i2 = 0;
	int i = in;
	while(i2 < i)
	{
		if(str[i2] == c)
			return 1;
	i2++;
	}
	return 0;
}
int	find_double2(char c, char *str)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] == c)
			return 1;
	i++;
	}
	return 0;
}

void	union_(char *str1, char *str2)
{
	int i = 0;
	while( str1[i])
	{
		if(find_double(str1,str1[i], i) == 0)
		{
			write(1, &str1[i], 1);
		}
	i++;
	}

	i = 0;
	while(str2[i])
	{
		if(find_double2(str2[i], str1) == 0 )
		{
			if(find_double(str2, str2[i], i) == 0)
				write(1, &str2[i], 1);
		}
	i++;
	}
}




int main(int ac, char **av)
{
	if (ac == 3)
		union_(av[1], av[2]);
	return 0;
}
