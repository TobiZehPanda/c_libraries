#include "c_opts.h"
#include <stdio.h>

void f_function() {
  printf("hello\n");
}

int main(int argc, char **argv) {
  set_helper(argc, argv, "test");
  set_opt(argc, argv, "-f", &f_function);
  return 0;
}

