#include <stdio.h>
#include <stdlib.h>

int main() {
    size_t size = 1000000000000; // An example large size that might cause allocation to fail

    // Attempt to allocate memory for an int array
    int *intArray = (int *)malloc(size * sizeof(int));
    if (intArray == NULL) {
        perror("Memory allocation failed for intArray");
        return 1;
    }

    // Attempt to allocate memory for a char array
    char *charArray = (char *)malloc(size * sizeof(char));
    if (charArray == NULL) {
        perror("Memory allocation failed for charArray");
        free(intArray); // Free previously allocated memory
        return 1;
    }

    // Attempt to allocate memory for a double array
    double *doubleArray = (double *)malloc(size * sizeof(double));
    if (doubleArray == NULL) {
        perror("Memory allocation failed for doubleArray");
        free(intArray);   // Free previously allocated memory
        free(charArray);  // Free previously allocated memory
        return 1;
    }

    // Attempt to allocate memory for a float array
    float *floatArray = (float *)malloc(size * sizeof(float));
    if (floatArray == NULL) {
        perror("Memory allocation failed for floatArray");
        free(intArray);   // Free previously allocated memory
        free(charArray);  // Free previously allocated memory
        free(doubleArray);// Free previously allocated memory
        return 1;
    }

    // Memory allocation successful, use the arrays here

    // Free allocated memory when done using it
    free(intArray);
    free(charArray);
    free(doubleArray);
    free(floatArray);

    return 0;
}
To convert a number from one base to another, you can follow these steps:
1. Convert the number from the original base to decimal.
2. Convert the decimal number to the target base.

For example, let's say you want to convert the number `101` from binary (base 2) to octal (base 8). First, you need to convert `101` from binary to decimal. To do this, you can use the formula `d = b0 * 2^0 + b1 * 2^1 + b2 * 2^2 + ... + bn * 2^n`, where `d` is the decimal representation of the number, `b0` is the rightmost digit in the binary representation, `b1` is the second rightmost digit, and so on. In this case, `d = 1 * 2^0 + 0 * 2^1 + 1 * 2^2 = 1 + 4 = 5`. So, `101` in binary is equivalent to `5` in decimal.

Next, you need to convert `5` from decimal to octal. To do this, you can use repeated division by the base (8 in this case). You divide `5` by `8`, which gives `0` with a remainder of `5`. Since the quotient is `0`, you stop here. The remainder is the first (and only) digit of the octal representation of the number. So, `101` in binary is equivalent to `5` in octal.

You can use this method to convert numbers between any two bases. Just make sure to use the correct formula for converting from the original base to decimal and the correct method for converting from decimal to the target base.

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

