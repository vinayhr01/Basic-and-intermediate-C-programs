#include<stdio.h>
#include<math.h>
#define PI 3.142
void main()
{
int i=2,degree;
float x,sum=0,term,nume,deno=1;
printf("Enter value of degree\n");
scanf("%d",&degree);
x=degree*(PI/180);
nume=x;
do
{
term=nume/deno;
nume=-nume*x*x;
deno=deno*i*(i+1);
sum=sum+term;
i=i+2;
}while(fabs(term)>=0.00001);
printf("The sine of %d is %.3f\n",degree,sum);
printf("The sine function of %d is %.3f",degree,sin(x));
return 0; 
}