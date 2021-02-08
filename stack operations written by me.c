#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void push(int s[], int *top,int item)
{
    if(*top==4)
    {
        printf("Stack overflow\n");
        return;
    }
    s[++(*top)]=item;
}

void pop(int s[], int *top)
{
    if(*top==-1)
    {
        printf("Stack underflow\n");
        return;
    }
    printf("The item deleted is %d\n",s[*top]);
    (*top)--;
}

void disp(int s[], int top)
{
    int i;
    if(top==-1)
    {
        printf("Stack underflow\n");
        return;
    }
    printf("Stack contents are\n");
    for(i=top;i>=0;i--)
    {
        printf("%d\n",s[i]);
    }
}

int pali(int s[], int top)
{
    int i,temp[5];
    for(i=top;i>=0;i--)
    {
        temp[i]=s[top-i];
    }
    for(i=top;i>=0;i--)
    {
        if(s[i]==temp[i])
            return 1;
        else
            return 0;
    }
}
void main()
{
    int s[5],ch,item,flag;
    int top=-1;
    
    for(;;)
    {
    printf("1)Push\n2)Pop\n");
    printf("3)Palindrome\n4)Display\n5)Exit\n6)Clearscreen\n");
    scanf("%d",&ch);
    
    switch(ch)
    {
        case 1:printf("Enter the item\n");
               scanf("%d",&item);
               push(s,&top,item);
               break;
            
        case 2:pop(s,&top);
               break;
         
        case 3:flag=pali(s,top);
               if(flag==1)
                    printf("Palindrome\n");
               else
                    printf("Not palindrome\n");
               break;
            
        case 4:disp(s,top);
               break;
            
        case 5: exit(0);
                break;
        case 6: clrscr();
                break;
    }
    }
}