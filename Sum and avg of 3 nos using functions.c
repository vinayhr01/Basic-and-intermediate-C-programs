#include<stdio.h>
int add(int,int, int);

void main()
{
    int a,b,c,sum;
    float avg;
    printf("Enter 3 val");
    scanf("%d%d%d",&a,&b,&c);
    sum=add(a,b,c);
    avg=sum/3;
    printf("Sum=%d\nAverage=%f",sum,avg);
}
int add(int m,int n,int p)
{
    return m+n+p;
}