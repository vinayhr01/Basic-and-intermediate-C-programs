#include<stdio.h>

void main()
{
    int j,item,a[20],i,n;
    
    printf("Enter the number of elements for the array\n");
    scanf("%d",&n);
    
    printf("Enter the %d items to insert\n",n);
    
    for(i=-1;i<n-1;i++)
    {
        scanf("%d",&item);
        
        j=i;
        while(j>=0 && item<a[j])
        {    
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=item;
    } 
      
    printf("Sorted array is\n");
    for(j=0;j<n;j++)
    {
        printf("%d\t",a[j]);
    }
}