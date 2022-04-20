#include <stdio.h>
#include <stdlib.h>

//viết app in ra tổng của dãy số sau
//1! + 2! + 3! +...+ n!

int getFactorial(int n);

int main(int argc, char const *argv[])
{
  int sum = 0, n;
  printf("Input an interger >= 2 to get the sum of a factorial chain: ");
  scanf("%d", &n);
  for(int i = 1; i <= n; i++)
    sum += getFactorial(i);

  printf("Sum of factorial chain from 1! to %d! = %d\n", n, sum);
  return 0;
}

int getFactorial(int n)
{
  int acc = 1;

  if (n == 0 || n == 1)
    return 1;

  for(int i = 2; i <= n; i++)
    acc *= i;

  return acc;
}