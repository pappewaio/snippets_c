#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Rmath.h"

int addition(int a, int b);
int multiply(int a, int b);

int addition(int a, int b) {
  printf("%d\n", a+b);
  return 0;
}

int multiply(int a, int b) {
  printf("%d\n", a*b);
  return 0;
}

int *create_func_array(int (*p)(int, int)) {

  p[0] = addition;
  p[1] = multiply;

  return p;
}

int main(int argc, char *argv[]) {

  //use two functions
  int a = 2;
  int b = 3;
  addition(a, b);
  multiply(a, b);

  //use two functions stored in an array
  int (*p[2]) (int a, int b);
  p[0] = addition;
  p[1] = multiply;

  (*p[0]) (a, b);
  (*p[1]) (a, b);
  
  //use two functions stored in an array retrieved from a function
  int *ptr;
  int (*arr[2]) (int a, int b);
  //printf("Address of arr = %u\n", arr);
  ptr=create_func_array(arr);
  //printf("Value at %u is %d\n", ptr, *ptr);


  return 0;
}

