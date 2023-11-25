#include <stdio.h>

int main()
{
  // Q1
  // int num1, num2;
  // scanf("%d %d", &num1, &num2);
  // int i;
  // int sum = 0;
  // for (i = num1; i <= num2; i++)
  //   sum += i;

  // printf("%d\n", sum);
  // Q2
  int num;
  int factorial = 1;
  int i;
  scanf("%d", &num);
  for (i = num; i >= 1; i--)
    factorial *= i;
  printf("%d\n", factorial);
  return 0;
}
