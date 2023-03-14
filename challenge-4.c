#include <stdio.h>
/*
Task

Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

Sample Input

3
4
6
5

Sample Output

6
*/
int max_of_two(int a, int b){
    int max = 0;
    if(a < b){
        max = b;
    }else{
        max = a; 
    }
    return max;
}

int max_of_four(int a, int b, int c, int d){
    int max = max_of_two(a, b); 
        max = max_of_two(max, c);
        max = max_of_two(max, d);
    
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("\n%d\n", ans);
    
    return 0;
}

