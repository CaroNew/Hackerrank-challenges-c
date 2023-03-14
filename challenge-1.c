#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
Task

This challenge requires you to print  on a single line, and then print the 
already provided input string to stdout. If you are not familiar with C, you 
may want to read about the printf() command.

Example

The required output is:

Hello, World!
Life is beautiful
*/

/*Solucion*/

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", s);
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    printf("Hello, World!\n%s\n", s);    
    return 0;
}
