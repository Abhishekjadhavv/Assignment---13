// Write a recursive function to calculate sum of first N even natural numbers

#include <stdio.h>
int sum_of_even(int);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    printf("sum is %d", sum_of_even(n));
    return 0;
}

int sum_of_even(int n)
{
    if (n == 1)
        return 2;
    return (2 * n) + sum_of_even(n - 1);
}