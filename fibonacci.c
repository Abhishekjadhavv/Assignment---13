// Write a recursive function to print first N terms of Fibonacci series

#include <stdio.h>
void fib(int n, int a, int b);
int main()
{
    int n, a = 1, b = 0;
    printf("Enter N terms");
    scanf("%d", &n);
    fib(n, a, b);
    return 0;
}

void fib(int n, int a, int b)
{
    int c;
    if (n > 0)
    {
        c = a + b;
        printf("%d ", c);
        fib(n - 1, b, c);
    }
}