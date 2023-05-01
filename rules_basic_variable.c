#include "stdio.h"
// ..

int a = 0;
int b = 0;

int foo(void) { return a + 1; }

void main(void) {
  // ..

  while (1) {
    foo();

    if (a > 5) {
      b = 1;
    }
  }
}
