#include<stdio.h>

int main()
{
    int a[20],ele,i,n,pos;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("Enter array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("Enter element to be found\n");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
        if(a[i]==ele)
            printf("%d",(i+1));                      
    return 0;
}