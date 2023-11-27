#include <stdio.h>

int returnMax(int num1, int num2)
{
  int result = num1 > num2 ? num1 : num2;

  return result;
}

int returnMin(int num1, int num2)
{
  int result = num1 < num2 ? num1 : num2;

  return result;
}

int FahToCel(int fah)
{
  return (fah - 32) / 1.8;
}

int CelToFah(int cel)
{
  return 1.8 * cel + 32;
}

int printFibonacci(int num)
{
  int intial = 0;
  int second = 1;
  printf("%d\n", intial);
  // printf("%d\n", second);

  // fibonacci
  // 0 1 1 2 3 5 8 13 21 34 55 89 144
  // c = a + b

  int temp = intial + second;

  for (int i = 1; i <= num; i++)
  {
    printf("%d\n", temp);
    intial = second;
    second = temp;
    temp = intial + second;
  }

  return 0;
}

int recursionFibo(int num)
{
  if (num == 0)
  {
    return 0;
  }
  else if (num == 1)
  {
    return 1;
  }

  return recursionFibo(num - 2) + recursionFibo(num - 1);
}

int main()
{
  // printf("%d\n", returnMax(3, 10));
  // printf("%d\n", returnMin(3, 10));
  // printf("%d\n", FahToCel(100));
  // printf("%d\n", CelToFah(37));
  // printFibonacci(10);
  for (int i = 0; i < 10; i++)
  {
    printf("%d\n", recursionFibo(i));
  }
  return 0;
}
