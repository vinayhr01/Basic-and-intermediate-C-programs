#include<stdio.h>
int add(int,int, int);
float avg(int, int, int);
void main()
{
    int a,b,c,sum;
    float average;
    printf("Enter 3 val\n");
    scanf("%d%d%d",&a,&b,&c);
    sum=add(a,b,c);
    average=avg(a,b,c);
    printf("Sum=%d\nAverage=%f",sum,average);
}
int add(int m,int n,int p)
{
    return m+n+p;
}
float avg(int m, int n, int p)
{
    return (m+n+p)/3;
}