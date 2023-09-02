/*unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int divided = 1;
	if (a == 0 || b == 0)
		return 0;
	while(divided)
	{
		if (divided % a == 0 && divided % b == 0)
			return divided;
		divided++;
	}
}*/
unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int	i;
    if (a == 0 || b == 0)
        return (0);
    i = (a > b) ? a : b;
    while (1)
    {
        if (i % a == 0 && i % b == 0)
            break;
        i++;
    }
    return (i);
}
int main() {
    // Test cases
    unsigned int result1 = lcm(4, 6);
    unsigned int result2 = lcm(9, 15);
    unsigned int result3 = lcm(0, 7);
    
    printf("LCM(4, 6) = %u\n", result1); // Should print 12
    printf("LCM(9, 15) = %u\n", result2); // Should print 45
    printf("LCM(0, 7) = %u\n", result3); // Should print 0
    
    return 0;
}
