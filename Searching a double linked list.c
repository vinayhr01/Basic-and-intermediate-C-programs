#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *llink;
    struct node *rlink;
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
    temp->llink=NULL;
    temp->rlink=NULL;
    
    if(root==NULL)
        return temp;
    last=root;
    while(last->rlink!=NULL)
    {
        last=last->rlink;   
    } 
    last->rlink=temp;
    temp->llink=last;
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
        temp=temp->rlink;
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
            temp=temp->rlink;
            count++;
        }
    }
    printf("Search Unsuccessful\n");
    return root;
}

n r_delete(n root)
{
    n last,plast;
    
    if(root==NULL)
    {
        printf("Linked list is empty, deletion impossible\n");
        return root;
    }
    if(root->rlink==NULL)
    {
        free(root);
        return NULL;
    }
    
    plast=NULL;
    last=root;
    
    while(last->rlink!=NULL)
    {
        plast=last;
        last=last->rlink;
    }
    plast->rlink=NULL;
    last->llink=NULL;
    free(last);
    return root;   
}

void main()
{
    n root=NULL;
    int ch,key,item;
    
    for(;;)
    {
        printf("1)insert\n2)search\n3)display\n4)r_delete\n5)exit\n");
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
            
            case 4: root=r_delete(root);
                    break;
            
            case 5: exit(0);
        }
    }  
}