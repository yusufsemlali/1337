int	hidenp(char *s1, char *s2)
{
	int i = 0;
	while(s1[i])
	{
		int x = 0;
		while(s2[x])
		{
			if (s2[x] == s1[i])
				i++;
		x++;
		}
		if (s1[i] == '\0')
			return 1;
		else
			break;
	i++;
	}
	return 0;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("\n");
    } else {
        int result = hidenp(argv[1], argv[2]);
        printf("%d\n", result);
    }
    
    return 0;
}
