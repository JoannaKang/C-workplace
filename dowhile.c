#include <stdio.h>

int main()
{
  // Q2
  // int sum = 0;
  // int counter = 0;
  // do
  // {
  //   sum += counter;
  //   counter += 2;
  // } while (counter <= 100);
  // printf("%d\n", sum);

  // Q3
  int cur = 2;
  do
  {
    int is = 1;
    do
    {
      printf("%d x %d = %d\n", cur, is, cur * is);
      is++;
    } while (is < 10);
    cur++;
  } while (cur < 10);
  return 0;
}
