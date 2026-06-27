#include<stdio.h>
int change(int num1){
  num1 = 5;
}
int main(){
  int num1 = 4;
  change(num1);
  printf("%d" , num1); //4
  return 0;
}