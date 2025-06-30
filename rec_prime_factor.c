#include <stdio.h>

void primeFactors(int n, int i);

void main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Prime factors of %d are: ", num);
    primeFactors(num, 2);
}

void primeFactors(int n, int i)
{
    if (n == 1)
        return;

    if (n % i == 0)
    {
        printf("%d ", i);
        primeFactors(n / i, i);
    }
    else
    {
        primeFactors(n, i + 1);
    }
}
