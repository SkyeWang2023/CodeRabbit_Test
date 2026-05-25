#include <stdio.h>
#include <stdlib.h>

void test()
{
  int m = 0;
  int *n = &m;
  free(n);
}
