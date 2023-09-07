int	max(int* tab, unsigned int len)
{
	int max = 0;
	while( len--)
	{
		if (tab[len] > max)
			max = tab[len];

	}
	return max;
}
#include<stdio.h>
int main()
{
	int tab[] = {10, 20, 30, 40, 50, 300};
	int len = sizeof(tab) / sizeof(tab[0]);
	int max_value = max(tab, 5);
	printf("The maximum value is %d\n", max_value);
	return 0;
}
