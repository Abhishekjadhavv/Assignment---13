// Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
int power_num(int num,int power);
int main(){
    int num,power;
    printf("Enter a number and power");
    scanf("%d%d",&num,&power);
    printf("%d",power_num(num,power));
    return 0;
}

int power_num(int num,int power){
   if(power==0)
    return 1;
  return num * power_num(num,power-1); 
}