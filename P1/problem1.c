#include <stdio.h>

int counter = 0;
int number = 0;
int still = 0;
int temp = 0;
int main(){
 printf("Enter the number : ");
 scanf("%d",&number);
 while(number != 0){
  if(number < 0){
   temp = number;
   number = -(number + 1);
  }
  still = number % 2;
  number /= 2;
  if(still != 0){
   counter++;
  }
 }
 if(temp < 0){
 printf("the num of ones is %d",((sizeof(int)*8) - counter));
 }
 else{
 printf("the num of ones is %d",counter);
 }
 return 0;
}