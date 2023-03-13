#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
  Task

You have to print the character, ch, in the first line. Then print  s in next line. In the last line print the sentence, sen.

Sample Input 0

C
Language
Welcome To C!!


Sample Output 0

C
Language
Welcome To C!!
*/
int main() 
{
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char ch;
    char s[100];
    char sen[100];
    
    scanf("%c",&ch);
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    
    printf("\n%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    
    
    return 0;
}
