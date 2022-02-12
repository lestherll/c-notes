// this is a single line comment

/* 
A 
multiline 
comment
*/

// headers are imported using #include
// system headers are enclosed by <header.h>
#include <stdio.h>

// custom headers are enclosed by "header.h"
// #include "header.h"

// main function is the entry point of a C program
// this can be written in various ways
// int main(void) {
//     your program
// }

// omitting void is also acceptable
// int main() {}

// main with command line arguments
int main(int argc, char** argv) {

    // can print output to stdou using printf from stdio.h
    printf("this is an output\n");

    // can format output using format specifiers 
    // https://www.cplusplus.com/reference/cstdio/printf/
    printf("%d\n", 42);

    // VARIABLES AND TYPES
    // variables must be declared first
    int a_int;
    // initialising, do not rely on just declaration and
    // always initialise for safety
    a_int = 0;

    // can be combined in the same line
    int b_int = 0;

    printf("a_int: %d\n", a_int);
    printf("b_int: %d\n", b_int);

    // float: usually 32-bit floating point 
    float a_float = 1.0f;
    
    // double: usually 64-bit floating point without the suffix f
    double a_double = 1.0;

    // char is usually a 1 byte whole number or
    // a literal enclosed by ''
    char a_char = 'A';
    char b_char = 0;

    // long: usually 4 to 8 bytes
    long a_long = 0;
    // long long: guaranteed to be at least 8 bytes
    long long a_long_long = 0.0;

}