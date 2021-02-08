#include<stdio.h> 
int ncr(int n,int r); 
int main() 
{ 
    int n,r,y; 
    printf("enter the value of n and r resp.\n"); 
    scanf("%d %d",&n,&r); 
    y=ncr(n,r); 
    printf("the value of ncr is %d\n",y); 
    return 0; 
} 
int ncr(int n,int r) 
{ 
    int y,res; 
    if(r==0) 
    { 
        y=1; 
        return y; 
    } 
    else if(n==r) 
    { 
        y=1; 
        return y; 
     } 
    else 
    { 
        res=ncr(n-1,r-1)+ncr(n-1,r); 
    } 
    return res;
}