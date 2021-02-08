#include<stdio.h> 
int FS(int); 
int main() 
{ 	
int Num, Fib; 	
printf("Please Enter the Number to find Nth Fibonacci Number : "); 	
scanf("%d", &Num); 	
Fib = FS(Num); 	 	
printf("\n %d Fibonacci Number = %d", Num, Fib); 
return 0; 
} 
int FS(int Num) 
{ 	
if ( Num == 0 ) 	
return 0; 	
else if ( Num== 1 ) 	
return 1; 	
else 	
return ( FS(Num - 1) + FS(Num - 2) ); 
}