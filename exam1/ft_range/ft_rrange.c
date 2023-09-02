#include <stdlib.h>
int	*ft_rrange(int start, int end)
{
	int i = 0;
	int *str_of_ints;
	int size;

	if ((start == 0 && end == 0) || start == end)
	{	
		str_of_ints = (int *)malloc(1 *sizeof(int));
		if(!str_of_ints)
			return 0;
		str_of_ints[0] = 0;
		return (str_of_ints);
	}
	else if (start >  end)
	{
		size = start - end + 1;
		str_of_ints = (int *)malloc(size * sizeof(int));
		if(!str_of_ints)
			return 0;
		while(i < size)
		{
			str_of_ints[i] = end;
			end++;
			i++;
		}
		return str_of_ints;
	}

	size = end - start +1 ;
	str_of_ints = (int *)malloc(size * sizeof(int));
	if (!str_of_ints)
		return (0);
	while(i < size)
	{
		str_of_ints[i] = end;
		end--;	
		i++;
	}
	return (str_of_ints);

}
int main() {
    // Test cases
    int start, end;
    int *result;

    // Test case 1
    start = 1;
    end = 3;
    result = ft_rrange(start, end);
    printf("Result for (%d, %d):\n", start, end);
    for (int i = 0; i <= end - start; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    free(result);

    // Test case 2
    start = -1;
    end = 2;
    result = ft_rrange(start, end);
    printf("Result for (%d, %d):\n", start, end);
    for (int i = 0; i <= end - start; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    free(result);

    // Test case 3
    start = 0;
    end = 0;
    result = ft_rrange(start, end);
    printf("Result for (%d, %d):\n", start, end);
    for (int i = 0; i <= end - start; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    free(result);

    // Test case 4
    start = 0;
    end = -3;
    result = ft_rrange(start, end);
    printf("Result for (%d, %d):\n", start, end);
    for (int i = 0; i <= start - end; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    free(result);

    return 0;
}	

		

