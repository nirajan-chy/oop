#include<stdio.h>
int main(){
  int id = 1;
  char grade = 'A';
  char name[] = "Nirajan";
  float marks = 89.5;
  double PI = 3.14;
  printf("Size of int = %zu bytes \n" , sizeof(int));
  printf("Size of char = %zu bytes \n" , sizeof(char));
  printf("Size of float = %zu bytes \n" , sizeof(float));
  printf("Size of double = %zu bytes \n" , sizeof(double));

  return 0;

}