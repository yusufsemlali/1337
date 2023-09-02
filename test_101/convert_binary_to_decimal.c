int binary_to_decimal(int binary)
{
    int decimal = 0;
    int i = 0;
    while (binary > 0)
    {
        int digit = binary % 10;
        int power_of_two = 1;
        int j = 0;
        while (j < i)
        {
            power_of_two *= 2;
            j++;
        }
        decimal += digit * power_of_two;
        binary /= 10;
        i++;
    }
    return decimal;
}
int main()
{
    int binary = 101;
    int decimal = binary_to_decimal(binary);
    printf("%d in binary is equivalent to %d in decimal\n", binary, decimal);
    return 0;
}

