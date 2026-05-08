/*
 * First C Program
 * -----------------------------------------
 * This program prints a simple introduction
 * similar to the image content.
 */

#include <stdio.h>  
// Preprocessor directive
// It tells the compiler to include standard input-output functions
// like printf() so we can display text on the screen

int main()  
// main() is the starting point of every C program
// Execution begins from here
// 'int' means this function will return an integer to the OS

{
    // Inside this block {} is the body of the program

    printf("I-I E I I O - I'M AYUSH BURMAN\n");
    // printf() is used to print output to the screen
    // \n is an escape sequence that moves cursor to next line

    printf("AJ91789\n");
    // Prints ID

    printf("COORD AB-27654-JK\n");
    // Prints coordinate information

    printf("EXPLORING\n");
    // Prints current status

    return 0;
    // Ends the program
    // Returns 0 to the operating system → means successful execution
}
