#include<stdio.h>
#include<stdlib.h>

void main()
{
    int i,mid,low,high,a[10],key,n;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("Read array\n");
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
    printf("Read key\n");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
         mid=(low+high)/2;
         if(key==a[mid])
        {
        printf("Key found\n");
        exit(0);
        }
        if(key<a[mid])  
        {
            high=mid-1;       
        }  
        else
        {
            low=mid+1;
        }          
    }
    printf("Key not found\n");
}