#include <stdio.h>
#include <math.h>  // math.h daroriya, hitach 5as rounding 
double ft_sqrt(int nb) {
    if (nb < 0) {
        return 0.0;  // Negative numbers ma3ndhomch sqrt.
	}

    double guess = nb;  // tanbdaw b ta9dir awaliy , innitial guess.
    double epsilon = 1e-10;  // had 5ona howa Tolerance for approximation . z3ma 3adad zirowat libghina smito wa9ila ta9arob. 

    while (1) {
        double next_guess = 0.5 * (guess + nb / guess);  // Newton-Raphson formula, t9riban bhalha. 
        double squared_difference = next_guess * next_guess - nb;
        if (squared_difference == 0.0 || (squared_difference >= -epsilon && squared_difference <= epsilon)) {
            return next_guess;  // returni square root ila l9itih olla ta9ribiy ghir mayfotch epsilon li howa ta9arob
        }
        guess = next_guess;
    }

    return 0.0;  // hada likaytsma FallBack f lprograming. fhalat ila w9a3 chi mochkil omal9ach sqrt() tatrad (0.0, hitach lfunction tatritorni double)
}

int main() {
    int num;
    double sqrt_num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    sqrt_num = ft_sqrt(num);

    if (sqrt_num > 0.0) {
        int rounded_sqrt = (int)round(sqrt_num);
        if (rounded_sqrt * rounded_sqrt == num) {
            printf("Square root of %d is %d\n", num, rounded_sqrt);
        } else {
            printf("Square root of %d is %.15f\n", num, sqrt_num);
        }
    } else {
        printf("Square root of %d is an irrational number or doesn't exist.\n", num);
    }

    return 0;
}

