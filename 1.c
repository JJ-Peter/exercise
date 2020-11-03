#include <stdio.h>

int main()
{
  printf("Hello World!\n");
  int a=1, b, c;
  a = a++;
  b = 3;
  c = a + b;
  printf("%d\n", a++);
  printf("%d\n", a);
  return 0;
}
