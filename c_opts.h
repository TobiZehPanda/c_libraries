#ifndef C_OPTS
#define C_OPTS

#include <stdio.h>

void set_helper(int argc, char **argv, char *help_msg);
void set_opt(int agc, char **argv, char *flag, void (*flag_function)());

#endif
