This is my read me file for Variadic functions
     *We will go over stdarg.h
     *C-Variable Arguments
     *Functions with Variable Argument Lists in C using va_list,
     *Variadic Functions
     *Const Keyword

What is variadic functions?
     *Are functions that take a variable number of arguments. They use ellipses.
     	  * int printf(const char* format,...)

What does va_start do?
     *it allows access to variadic function arguments

What does va_arg do?
     *it allows the next variadic function argument

What does va_end do?
     *it ends the variadic function argument

How do we use const?
    *We use const for function arguments passed by reference where the function doesn't change.\
    	*int find(const int *data, size_t size, int value);