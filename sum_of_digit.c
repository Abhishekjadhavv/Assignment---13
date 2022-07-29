// Write a recursive function to calculate sum of digits of a given number

#include<stdio.h>
int sum_of_digit(int);
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("sum is %d",sum_of_digit(n));
    return 0;
}
int sum_of_digit(int n){
    if(n<=0)
     return 0;
   return (n%10) + sum_of_digit(n/10);
}