#include <stdio.h>
#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	i;
	int	*arr_of_ints;
	int *arr_0;
	int	size;

	i = 0;
	if (min == 0 && max == 0)
	{	arr_of_ints = (int *)malloc(1 *sizeof(int));
		if (!arr_of_ints)
			return (0);
		arr_of_ints[0] = 0;
		return arr_of_ints;
	}
	else if (min > max) 
	{
		i = 0;
		size = min - max;
		arr_of_ints = (int *)malloc(size *sizeof(int));
		while(i <= size)
		{
			arr_of_ints[i] = min;
			min--;
			i++;
		}
		return (arr_of_ints);	
	}
	i = 0;
	size = max - min;
	arr_of_ints = (int *)malloc(size * sizeof(int));
	while (i <= size)
	{
		arr_of_ints[i] = min;
		min++;
		i++;
	}
	return (arr_of_ints);
}

int *ft_range(int start, int end);

int main() {
    // Test cases
    int start, end;
    int *result;

    // Test case 1
    start = 1;
    end = 3;
    result = ft_range(start, end);
    printf("Result for (%d, %d):\n", start, end);
    for (int i = 0; i <= end - start; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    free(result);

    // Test case 2
    start = -1;
    end = 2;
    result = ft_range(start, end);
    printf("Result for (%d, %d):\n", start, end);
    for (int i = 0; i <= end - start; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    free(result);

    // Test case 3
    start = 0;
    end = 0;
    result = ft_range(start, end);
    printf("Result for (%d, %d):\n", start, end);
    for (int i = 0; i <= end - start; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    free(result);

    // Test case 4
    start = 0;
    end = -3;
    result = ft_range(start, end);
    printf("Result for (%d, %d):\n", start, end);
    for (int i = 0; i <= start - end; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    free(result);

    return 0;
}

