#include "c_opts.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void set_helper(int argc, char **argv, char *help_msg) {
  for (int i = 1; i < argc; i++) {
    if (strcmp(argv[i], "-h") == 0) {
      printf("%s\n", help_msg);
      exit (0);
    }
  }
}

void set_opt(int argc, char **argv, char *flag, void (*flag_function)()) {
  for (int i = 1; i < argc; i++) {
    if (strcmp(argv[i], flag) == 0) {
      flag_function();
    }
  }
}
