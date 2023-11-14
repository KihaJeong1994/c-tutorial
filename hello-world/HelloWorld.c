// The Structure of a C program

// Header
// All lines that start with # are processed by a preprocessor which is a program invoked by the compiler
// the preprocessor copies the preprocessed code of ~.h to our file
#include <stdio.h> // header file with extension .h : contains C function declarations

//Main Method : the entry point of a C program
int main()
{ // Body
    printf("Hello World"); // Statement. always end with ;

    return 0; // Return. The value returned by the main indicates the status of program termination. 0: successful termination
}

// to compile the code,
// gcc -o helloworld HelloWorld.c