#include <stdio.h>

int main() {

  int marks[10], i, j, r, sum = 0;
  int arrays;

  printf("Enter the size of array: ");
  scanf("%d", &j);

  for(i=0; i < j; ++i) {
    printf("Enter element%d: ",i+1);
    scanf("%d", &marks[i]);
  }
 sum += marks[i];
  r = marks + j; 

  printf("Sum of all array elements = %d", r);

  return 0;
}