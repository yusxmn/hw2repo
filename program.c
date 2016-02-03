#include <stdio.h>

int sum(int n)
{
  if (n == 0) return 0;
  return n + sum(n-1);
}

int main()
{
  printf("Hello world!\n");
  printf("%d\n", fib(5));
  return 0;
}
