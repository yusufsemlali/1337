#include <stdio.h>
#include <stdlib.h>

// Function to calculate the greatest common divisor (GCD) using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("\n");
    } else {
        int num1 = atoi(argv[1]); // Convert the first argument to an integer
        int num2 = atoi(argv[2]); // Convert the second argument to an integer
        
        if (num1 > 0 && num2 > 0) {
            int result = gcd(num1, num2);
            printf("%d\n", result);
        } else {
            printf("\n");
        }
    }
    
    return 0;
}

