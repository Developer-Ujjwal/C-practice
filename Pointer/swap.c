
#include <stdio.h>
void swap_call_by_reference(int *a, int *b) {
  int temp = *a; 
  *a = *b;  
  *b = temp; 
  printf("After swapping with pointers: x = %d, y = %d\n",*a,*b); 
}

void swap_call_by_value(int a, int b) {
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping without pointers: x = %d, y = %d\n", a, b);
}

int main() {
  int x = 10, y = 20; 
  printf("Before swapping: x = %d, y = %d\n", x, y); 
  swap_call_by_reference(&x, &y);
  x=10,y=20;
  swap_call_by_value(x, y); 
  return 0;
}