/*Documentation Section
Link Section
Definition Section
Global Declaration Section
main() Function Section
Subprogram Section (User-defined functions)
*/

/* Program to add two numbers
   Author: Pushpasri */

#include <stdio.h> // Link Section: include standard library

#define PI 3.14 // Definition Section: define constant

int total; // Global Declaration Section: global variable

// main() Function Section: entry point of the program
int main()
{
    int a = 5, b = 10, sum;
    sum = a + b;
    printf("Sum = %d\n", sum);
    return 0; // return 0 indicates successful execution
}

// Subprogram Section: user-defined function (example)
void greet()
{
    printf("Welcome to C programming!\n");
}
