#include <stdio.h>

double factorial(int);

int main()
{
    double x;
    printf("Enter the value of x:\n");
    scanf("%lf", &x);

    double term = x;
    double sum = term;
    int n = 2;

    while (sum <= 2.6 && term <= 1.5)
    {
        term = (term * x) / factorial(n);
        sum += term;
        n++;
    }

    printf("Series: ");
    for (int i = 1; i < n; i++)
    {
        printf("%lf ", pow(x, i) / factorial(i));
    }
    printf("\n");

    printf("Sum: %lf\n", sum);

    return 0;
}

double factorial(int n)
{
    double fact = 1.0;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
