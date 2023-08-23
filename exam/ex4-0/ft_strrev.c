char *ft_strrev(char *str)
{
	int size = 0;
	while(str[size++] != '\0')
	{
		size++;
	}

	int start = 0;
	int end = size-1;


	while (start < end)
	{
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		end--;
		start++;
	}
	return str;
}
