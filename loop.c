#include <stdio.h>

int main()
{
  // Q1
  // int counter = 0;
  // int num;
  // scanf("%d", &num);
  // while(counter < num)
  // {
  //   printf("Hello World\n");
  //   counter++;
  // }

  // Q2
  // int number;
  // scanf("%d", &number);
  // int counter = 0;
  // while(counter < number +1 )
  // {
  //   printf("%d\n", counter * 3);
  //   counter++;
  // }

  // Q3
  // int number;
  // int sum = 0;
  // scanf("%d", &number);
  // while (number != 0)
  // {
  //   sum += number;
  //   scanf("%d", &number);
  // }
  // printf("%d", sum);
  // return 0;

  // Q4
  // int number;
  // int counter = 9;
  // scanf("%d", &number);
  // while(counter> 0)
  // {
  //   printf("%d x %d = %d\n", number, counter, number*counter);
  //   counter--;
  // }
  // return 0;

  // Q5
  // float iteration;
  // int counter = 0;
  // float sum = 0;
  // scanf("%f", &iteration);
  // while (counter < iteration)
  // {
  //   int input;
  //   scanf("%d", &input);
  //   sum += input;
  //   counter++;
  // }

  // printf("average: %f\n", sum/iteration);

  // Q7-2
  // int sum = 0;
  // int counter = 0;
  // int input = 0;
  // while(counter < 5) {
  //   while (input <= 0) {
  //     printf("try input lager than 0 / input: %d\n", input);
  //     scanf("%d", &input);
  //   }

  //   sum += input;
  //   input = 0;
  //   counter++;
  // }
  // printf("Sum: %d\n", sum);
  // return 0;

  // Q7-3
  int counter = 0;

  while (counter < 5)
  {
    int inside = 1;
    while (inside <= counter)
    {
      printf("O");
      inside++;
    }

    printf("*\n");
    counter++;
  }

  return 0;
}