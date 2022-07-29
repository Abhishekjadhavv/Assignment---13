// Write a recursive function to calculate HCF of two numbers

#include <stdio.h>
int HCF(int a, int b, int f);
int main()
{
    int a, b, f;
    printf("Enetr two number");
    scanf("%d%d", &a, &b);
    f = a < b ? a : b;
    printf("HCF IS %d", HCF(a, b, f));
    return 0;
}

int HCF(int a, int b, int f)
{
    if (a % f == 0 && b % f == 0)
    {
        return f;
    }
    if ((a < b ? a : b) == f)
    {
        return HCF(a, b, f / 2);
    }
    else
    {

        return HCF(a, b, f - 1);
    }
}