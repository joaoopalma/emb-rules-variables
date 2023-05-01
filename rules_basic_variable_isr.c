#include "stdio.h"
// ..

int f_btn = 0;

void btn_callback(void) { f_btn = 1; }

void main(void) {

  // ...

  volatile int cnt = 0; // não precisa ser volatile

  while (1) {
    if (f_btn) {
      cnt++;
      f_btn = 0;
    }
  }
}
