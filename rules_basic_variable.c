#include "stdio.h"

// ..

int a = 0;
int b = 0;

void foo(void) {
  a = a + 1;
}

void main(void) {
  // ..

  while (1) {
    foo();

    if (a > 5) {
      b = 1;
    }
  }
}
