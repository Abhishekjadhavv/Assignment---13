// Write a recursive function to calculate sum of first N natural numbers
#include <stdio.h>
int sum(int);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    printf("sum is %d", sum(n));
    return 0;
}
int sum(int n)
{
    if (n == 1)
        return 1;
    return n + sum(n - 1);
}