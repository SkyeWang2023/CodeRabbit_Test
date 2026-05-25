#include <stdio.h>
#include <stdlib.h>
void comp()
{
  int x = 1.0;
  int *p = new int;
  *p++ = 2;
}

void test()
{
  int m = 0;
  int *n = &m;
  free(n);
}
