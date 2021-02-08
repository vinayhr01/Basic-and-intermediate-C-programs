#include<stdio.h>
void main()
{
    int i,j;
    char name1[15],name2[15],name[15];
    printf("Enter name1\n");
    gets(name1);
    printf("Enter name2\n");
    gets(name2);  
    for(i=0;name1[i]!='\0';i++)
        name[i]=name1[i];
        name[i]=' ';
    for(j=0;name2[j]!='\0';j++)
        name[i+j+1]=name2[j];
        name[i+j+1]='\0';
    printf("%s\n",name);
}