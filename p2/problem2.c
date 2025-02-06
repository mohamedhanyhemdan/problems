#include <stdio.h>
#include <stdlib.h>

int arr[] = {1,2,3,4,5,8,7,6,9,10,5};
int compare(const void *num1, const void *num2);
void Find_Repeated_Num();
int main (){
 Find_Repeated_Num();
 return 0;
}
int compare(const void *num1, const void *num2) {
 return (*(int*)num1 - *(int*)num2);
}
void Find_Repeated_Num(){
 int Size_Arr = sizeof(arr)/sizeof(int);
 qsort(arr,Size_Arr,sizeof(int),compare);
 for(int i = 0;i < Size_Arr;i++){
  if((i+1) != arr[i]){
   printf("The repeated number is : %d",arr[i]);
   break;
  }
 }
}