/*Skip to content
Search for:
C program to find sum of even or odd number in given range using recursion
March 1, 2016PankajC programmingC, Function, Program, Recursion
Write a recursive function in C to find sum of all even or odd numbers in a given range. How to find sum of all even numbers between 1 to n using recursion in C programming.

Example

Input

Input lower limit: 1
Input upper limit: 100
Output

Sum of even numbers between 1 to 100 = 2550

Required knowledge
Basic C programming, If else, Functions, Recursion

Must know - Program to find sum of even numbers using loop.



 Finding sum of even or odd numbers in range is almost similar to previous program we did.
Learn more - Program to find sum of natural numbers using recursion.

Declare recursive function to find sum of even number
First give a meaningful name to our function, say sumOfEvenOdd().
Next the function accepts two integer values from user i.e. start and end range. Hence, update function declaration to sumOfEvenOdd(int start, int end);.
Finally, after calculating sum of even or odd numbers the function must return it to the caller. Hence, return type of the function must be int.
Final function declaration to find sum of all even or odd numbers in given range is - int sumOfEvenOdd(int start, int end);.


Program to find sum of even or odd numbers using recursion
/** 
 * C program to find sum of all even or odd numbers in given range using recursion
 */

#include <stdio.h>


int sumOfEvenOdd(int start, int end);


int main()
{
    int start, end, sum;

    /* Input lower and upper limit from user */
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);
    
    printf("Sum of even/odd numbers between %d to %d = %d\n", start, end, sumOfEvenOdd(start, end));
    
    return 0;
}



/**
 * Find sum of all even or odd numbers recursively.
 */
int sumOfEvenOdd(int start, int end) 
{
    /* Base condition */
    if(start > end)
        return 0;
    else
        return (start + sumOfEvenOdd(start + 2, end));
}