// Write a program in C to count the digits of a given number using recursion.

#include<stdio.h>
int count_digit(int n);
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("digit is %d",count_digit(n));
    return 0;
}

int count_digit(int n){
  static int c = 0;
  if(n>0){
   c++;
   count_digit(n/10);
  }
  return c;
}