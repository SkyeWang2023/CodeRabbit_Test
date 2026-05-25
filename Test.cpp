#include <stdio.h>
#include <stdlib.h>

void test()
{
  int m = 0;
  int *n = &m;
  free(n);
}

void test2()
{
  int m2 = 0;
  int *n2 = &m2;
  free(n2);
}
