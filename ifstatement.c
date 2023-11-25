#include <stdio.h>

int main()
{
  // int i;
  //  Q1
  //  for (i = 1; i < 100; i++)
  //    if (i % 7 == 0 || i % 9 == 0)
  //      printf("%d\n", i);

  // Q2
  // int num1, num2;
  // scanf("%d %d", &num1, &num2);
  // if (num1 > num2)
  // {
  //   printf("case1: %d\n", num1 - num2);
  // }
  // else
  // {
  //   printf("case2: %d\n", num2 - num1);
  // }

  // Q3
  // int korean, english, math;
  // scanf("%d %d %d", &korean, &english, &math);

  // int average = (korean + english + math) / 3;

  // if (average >= 90)
  // {
  //   printf("A\n");
  // }
  // else if (average >= 80)
  // {
  //   printf("B\n");
  // }
  // else if (average >= 70)
  // {
  //   printf("C\n");
  // }
  // else if (average >= 60)
  // {
  //   printf("D\n");
  // }
  // else
  // {
  //   printf("F\n");
  // }

  // Q4
  // int num1, num2;
  // scanf("%d %d", &num1, &num2);

  // int result = num1 > num2 ? num1 - num2 : num2 - num1;
  // printf("%d\n", result);

  // Q5
  // for (int i = 1; i <= 9; i++)
  // {
  //   if (i % 2 == 0)
  //   {
  //     for (int j = 1; j <= 9; j++)
  //     {
  //       printf("%d x %d = %d\n", i, j, i * j);
  //       if (i == j)
  //       {
  //         break;
  //       }
  //     }
  //   }
  // }

  // Q6
  // int A, Z;
  // int result = 0;

  // for (A = 0; A < 10; A++)
  // {
  //   for (Z = 0; Z < 10; Z++)
  //   {
  //     result = (10 * A + Z) + (10 * Z + A);
  //     if (result == 99)
  //     {
  //       printf("%d, %d, %d, %d\n", A, Z, Z, A);
  //     }
  //   }
  // }

  // Q7
  int n;
  scanf("%d", &n);
  switch (n / 10)
  {
  case 0:
    printf("0 이상 10 미만\n");
    break;
  case 1:
    printf("10 이상 20미만\n");
    break;
  case 2:
    printf("20 이상 30미만\n");
    break;
  default:
    printf("30이상");
  }
  return 0;
}
