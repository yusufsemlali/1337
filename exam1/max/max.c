// int	max(int* tab, unsigned int len)
// {
// 	int max = 0;
// 	if (len > 0)
// 	{
// 		max = tab[0];

// 	}
// 	while( len--)
// 	{
// 		if (tab[len] > max)
// 			max = tab[len];

// 	}
// 	return max;
// }

int	max(int *tab, unsigned int len)
{
	unsigned int i;
	int max;
	
	i = 0;
	max = 0;
	if (len > 0)
		max = tab[0];
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

#include<stdio.h>
int main()
{
	int tab[] = {10,20};
	int len = sizeof(tab) / sizeof(tab[0]);
	int max_value = max(tab, 0);
	printf("The maximum value is %d\n", max_value);
	return 0;
}
