
#include <stdio.h>
int fabs(int x) {
    if (x < 0) {
        return -x;
    } else {
        return x;
    }
}

int	ft_sqrt(int nb)
{
    int	guess = x;  
	// Initial guess
    int	tolerance = 1e-10;  
	// Tolerance for approximation

    while (1) 
	{
        int	next_guess = 0.5 * (guess + x / guess);  // Newton-Raphson formula
        if (fabs(next_guess - guess) < epsilon) 
		{
            break;  // Converged within tolerance
        }
        guess = next_guess;
    }

    return guess;
}

int main() {
    double num, sqrt_num;

    printf("Enter a positive number: ");
    scanf("%lf", &num);

    if (num < 0) {
        printf("Please enter a positive number.\n");
        return 1;  // Exit with an error code
    }

    sqrt_num = custom_sqrt(num);

    printf("Custom square root of %.6f: %.6f\n", num, sqrt_num);
    
    double absolute_value = fabs(-5.25);
    printf("Absolute value of -5.25: %.2f\n", absolute_value);

    return 0;
}
