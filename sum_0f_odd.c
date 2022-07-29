// Write a recursive function to calculate sum of first N odd natural numbers

#include <stdio.h>
int sum_of_odd(int);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    printf("sum is %d", sum_of_odd(n));
    return 0;
}

int sum_of_odd(int n)
{
    if (n == 1)
        return 1;
    return (2 * n - 1) + sum_of_odd(n - 1);
}