// Write a recursive function to calculate sum of squares of first n natural numbers

#include <stdio.h>

int sum_of_squares(int);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    printf("sum is %d", sum_of_squares(n));
    return 0;
}

int sum_of_squares(int n)
{
    if (n == 1)
        return 1;
    return (n * n) + sum_of_squares(n - 1);
}