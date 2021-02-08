#include <stdio.h> 
int multiply (int, int); 
int main() 
{ 
    int a, b, c; 
    printf("Enter a and b\n");
    scanf("%d%d",&a,&b);
    c = multiply(a, b); 
    printf("The product is %d\n", c); 
    return 0; 
    } 
    int multiply(int a, int b) 
    { 
    static int c = 0, i = 0; 
    if (i < a) 
    { 
    c = c + b; 
    i++; 
    multiply(a, b); 
    } 
    return c; 
    }
 