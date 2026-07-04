#include<stdio.h>

int getSum(int arr[], int n){
  int sum = 0;
  for (int i = 0; i < n; i++){
    sum += arr[i];
  }
  return sum;
}

int main(){
  int arr[5] = {10, 20, 30, 40, 50};
  int sum = getSum(arr, 5);
  float average = (float)sum / 5;

  printf("Sum = %d\n", sum);
  printf("Average = %.2f\n", average);

  return 0;
}