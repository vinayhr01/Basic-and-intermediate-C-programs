#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int a,b,res;
char ch;
clrscr();
printf("Enter the operator\n");
scanf("%c",&ch);
printf("Enter 2 integers\n");
scanf("%d%d",&a,&b);
switch(ch)
{
case'+':res=a+b;
break;
case'-':res=a-b;
break;
case'*':res=a*b;
break;
case'/':if(b!=0)
{
res=a/b;
}
else
{
printf("Divide by 0 error\n");
exit(0);
}
break;
default:printf("Not avalid operator\n");
exit(0);
}
printf("Result=%d",res);
}