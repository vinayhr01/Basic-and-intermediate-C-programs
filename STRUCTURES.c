#include<stdio.h>
struct student
{
    char usn[50];
    char name[50];
    int marks;
}s[10];
void main()
{
    int i,n,countav=0,countbv=0;
    float sum=0,avg;
    printf("Enter number of students\n");
    scanf("%d",&n);
    printf("Enter information of students\n");
    for(i=0;i<n;i++)
    {
        printf("Enter USN\n");
        scanf("%s",s[i].usn);
        
        printf("Enter Name\n");
        scanf("%s",s[i].name);
        
        printf("Enter Marks\n");
        scanf("%d",&s[i].marks);
        
        printf("\n");
    }
printf("Information which you provided\n");
for(i=0;i<n;i++)
{
    printf("USN:-%s\n",s[i].usn);
    printf("Name:-\n");
    puts(s[i].name);
    printf("Marks:-%d\n",s[i].marks);
    printf("\n");
}
for(i=0;i<n;i++)
{
    sum+=s[i].marks;
}
printf("Sum=%f\n",sum);
avg=sum/n;
printf("Average Marks=%f\n",avg);
countav=0;
countbv=0;
for(i=0;i<n;i++)
{
    if(s[i].marks>=avg)
        countav++;
    else
        countbv++;
}
printf("Students above Average=%d\n",countav);
printf("Students below Average=%d\n",countbv);
}