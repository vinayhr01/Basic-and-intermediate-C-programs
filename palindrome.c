#include<stdio.h>
#include<conio.h>
int main()
{
int a[30],i,num,key,low,mid,high;
clrscr();
printf("\nEnter the no of elements\n");
scanf("%d",&num);
printf("\nEnter the elements\n");
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
printf("Enter key element to be searched\n");
scanf("%d",&key);
low=0;
high=num-1;
while(low<=high)
{
mid=(low+high)/2;
if(a[mid]==key)
{
printf("Element %d is found at %d position",key,mid+1);
exit(0);
}
else if(a[mid]>key)
high=mid-1;
else 
low=mid+1;
}
printf("\nUNSUCCESSFUL SEARCH\n");
return 0;
}