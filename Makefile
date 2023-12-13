main:	main.c c_opts.c
	gcc main.c c_opts.c c_opts.h -o main

.PHONY: all clean main
