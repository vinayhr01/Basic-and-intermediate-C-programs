#include<stdio.h> 
long long r,n,o,p,result; 
long long binomial(long long n,long long m) 
{ 
    if(n==r) 
    return 1; 
    else 
    { 
        if(r==0) 
        return 1; 
        else 
        { 
            o=binomial(n-1,r); 
            p=binomial(n-1,r-1); 
            return o+p; 
        } 
     }
} 
int main() 
{ 
    printf("Please Enter The Value Of n:\n"); 
    scanf("%lld",&n); 
    printf("Now Enter The value of r:\n"); 
    scanf("%lld",&r); 
    result = binomial(n,r); 
    printf("Resultant Binomial coefficient: %lld\n",result); 
    return 0; 
}