#include<stdio.h>
void display(int arr[] ,int n){
  for (int i = 0 ; i< n ;i++){
    printf("%d \t" , arr[i]); // 1 2 3, 4 5
  }
}

int main (){
  int arr[5] = {1 , 2 ,3, 4, 5};
  display(arr , 5);
  return 0;
}