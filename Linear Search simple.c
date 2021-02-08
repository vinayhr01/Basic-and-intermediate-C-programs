#include<stdio.h>

void main()
{
    int a[10],n,key,i,found=0;
    
    printf("Enter number of elements\n");
    scanf("%d",&n);
    
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter key\n"); 
    scanf("%d",&key);    
           
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            printf("Element found at position %d",i+1);
            found=1;
            break;
        }
    }
    if(found==0)
        printf("Unsuccessful search\n");
}