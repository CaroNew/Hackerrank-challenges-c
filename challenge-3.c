#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
Task

Your task is to take two numbers of int data type, two numbers of float 
data type as input and output their sum:

1. Declare 4 variables: two of type int and two of type float.
2. Read 2 lines of input from stdin (according to the sequence given in 
the 'Input Format' section below) and initialize your 4 variables.
3. Use the + and - operator to perform the following operations:
Print the sum and difference of two int variable on a new line.
Print the sum and difference of two float variable rounded to one decimal place on a new line.

Input Format

The first line contains two integers.
The second line contains two floating point numbers.

Sample Input

10 4
4.0 2.0

Sample Output

14 6
6.0 2.0
*/
/*Solution*/


int main()
{
	int a = 0;
    int b = 0;
    float c = 0;
    float d = 0;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    printf("%d %d\n", a+b, a-b);
    printf("%.1f %.1f\n", c+d, c-d);
    
    
    return 0;
}

