#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
};
typedef struct node *n;

n getnode()
{
    n p;
    p=(n*)malloc(sizeof(struct node));
    
    if(p==NULL)
    {
        printf("Insufficient Memory\n");
        exit(0);
    }
    return p;
}

n r_insert(n root,int item)
{
    n temp,last;
    temp=getnode();
    temp->info=item;
    temp->link=NULL;
    
    if(root==NULL)
        return temp;
    last=root;
    while(last->link!=NULL)
    {
        last=last->link;   
    } 
    last->link=temp;
    return root;
}

n display(n root)
{
    n temp;
    
    if(root==NULL)
    {
        printf("Linked list is empty\n");
        return root;
    }
    
    temp=root;
    printf("The list contents are\n");
    while(temp!=NULL)
    {
        printf("%d\n",temp->info);
        temp=temp->link;
    }
    return root;
}

n search(n root,int key)
{
    n temp;
    int count=1;
    
    if(root==NULL)
    { 
       printf("Search Unsuccessful as linked list is empty\n");
       return root;      
    }
    if(key==root->info)
    {
        printf("Search successful\n");
        printf("Node is present at loc %d\n",count);
        return root;
    }
    temp=root;
    while(temp!=NULL)
    {
        if(key==temp->info)
        {
            printf("Search success at loc %d\n",count);
            return root;
        }
        else
        {
            temp=temp->link;
            count++;
        }
    }
    printf("Search Unsuccessful\n");
    return root;
}

void main()
{
    n root=NULL;
    int ch,key,item;
    
    for(;;)
    {
        printf("1)insert\n2)search\n3)display\n4)exit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1: printf("Enter item\n");
                    scanf("%d",&item);
                    root=r_insert(root,item);
                    break;
            
            case 2: printf("Enter key\n");
                    scanf("%d",&key);
                    search(root,key);
                    break;
            
            case 3: root=display(root);
                    break;
            
            case 4: exit(0);
        }
    }  
}