#include<stdio.h>
int change(int *num1){
  *num1 = 4;
}
int main(){
  int num1 = 5;
  change(&num1);
  printf("%d" , num1); //4
  return 0;
}