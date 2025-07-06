//Scientific Calculator
#include <stdio.h>
#include <math.h>

// Function to calculate factorial
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

int main() {
    int choice;
    double a, b, result;
    int n;

    do {
        printf("\n=== Scientific Calculator ===\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Power (x^y)\n");
        printf("6. Square Root\n");
        printf("7. Log (base 10)\n");
        printf("8. Natural Log (ln)\n");
        printf("9. Exponential (e^x)\n");
        printf("10. Sine\n");
        printf("11. Cosine\n");
        printf("12. Tangent\n");
        printf("13. Inverse Sine (asin)\n");
        printf("14. Inverse Cosine (acos)\n");
        printf("15. Inverse Tangent (atan)\n");
        printf("16. Factorial\n");
        printf("17. Modulo\n");
        printf("18. Absolute Value\n");
        printf("0. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result: %.2lf\n", a + b);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result: %.2lf\n", a - b);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result: %.2lf\n", a * b);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                if (b == 0)
                    printf("Error: Cannot divide by zero.\n");
                else
                    printf("Result: %.2lf\n", a / b);
                break;

            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &a, &b);
                printf("Result: %.2lf\n", pow(a, b));
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%lf", &a);
                if (a < 0)
                    printf("Error: Cannot take square root of negative number.\n");
                else
                    printf("Result: %.2lf\n", sqrt(a));
                break;

            case 7:
                printf("Enter a number (>0): ");
                scanf("%lf", &a);
                if (a <= 0)
                    printf("Error: Log undefined for zero or negative numbers.\n");
                else
                    printf("Result: %.2lf\n", log10(a));
                break;

            case 8:
                printf("Enter a number (>0): ");
                scanf("%lf", &a);
                if (a <= 0)
                    printf("Error: ln undefined for zero or negative numbers.\n");
                else
                    printf("Result: %.2lf\n", log(a));
                break;

            case 9:
                printf("Enter x: ");
                scanf("%lf", &a);
                printf("Result: %.2lf\n", exp(a));
                break;

            case 10:
                printf("Enter angle in radians: ");
                scanf("%lf", &a);
                printf("sin(%.2lf) = %.2lf\n", a, sin(a));
                break;

            case 11:
                printf("Enter angle in radians: ");
                scanf("%lf", &a);
                printf("cos(%.2lf) = %.2lf\n", a, cos(a));
                break;

            case 12:
                printf("Enter angle in radians: ");
                scanf("%lf", &a);
                printf("tan(%.2lf) = %.2lf\n", a, tan(a));
                break;

            case 13:
                printf("Enter a value (-1 to 1): ");
                scanf("%lf", &a);
                if (a < -1 || a > 1)
                    printf("Error: Input out of domain.\n");
                else
                    printf("asin(%.2lf) = %.2lf\n", a, asin(a));
                break;

            case 14:
                printf("Enter a value (-1 to 1): ");
                scanf("%lf", &a);
                if (a < -1 || a > 1)
                    printf("Error: Input out of domain.\n");
                else
                    printf("acos(%.2lf) = %.2lf\n", a, acos(a));
                break;

            case 15:
                printf("Enter a value: ");
                scanf("%lf", &a);
                printf("atan(%.2lf) = %.2lf\n", a, atan(a));
                break;

            case 16:
                printf("Enter a positive integer: ");
                scanf("%d", &n);
                if (n < 0)
                    printf("Error: Factorial of negative number not defined.\n");
                else
                    printf("%d! = %lld\n", n, factorial(n));
                break;

            case 17:
                printf("Enter two integers: ");
                scanf("%d %d", &n, &choice);
                if (choice == 0)
                    printf("Error: Division by zero.\n");
                else
                    printf("Result: %d\n", n % choice);
                break;

            case 18:
                printf("Enter a number: ");
                scanf("%lf", &a);
                printf("Result: %.2lf\n", fabs(a));
                break;

            case 0:
                printf("Goodbye!\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 0);

    return 0;
}
