#include <stdio.h>

typedef struct
{
  int x;
  int array[100];
} Foo;

int main()
{
   Foo f;
   f.x = 5;
   f.array[0] = 1;
   printf("f.x: %d\n", f.x);
   printf("f.array[0]: %d\n", f.array[0]);
   return 0;
}
