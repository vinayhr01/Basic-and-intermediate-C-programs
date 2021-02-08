#include<stdio.h>
#include<stdlib.h>
int i;

void main()
{
    int a[10],n,key,pos;
    
    printf("Enter the number of array elements\n");
    scanf("%d",&n);
        
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter the key\n");
    scanf("%d",&key);
    
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {    
            printf("Search successful at pos %d\n\n",i+1); 
            continue;
        }
        else
        {
            printf("Search Unsuccessful at pos %d\n\n",i+1);
            continue;
        }
    }
}