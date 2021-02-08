/*Deleting a node whose info field is specified(A key is given and the key will be the info)
...........................................................................................

-> This function is used to delete a node based on the info field.(info is known as the key)
-> The key is compared with the info field of each node of the linked list.
-> If both the key and the info match,the delete operation takes place.
-> The comparison starts from the root node and the comparison ends when the key matches with the info.
-> If the key is not matched,a message saying "key not found" is printed.
-> The function free() is used to release the allocated memory of the node to be deleted.


 case 0:
	      root==NULL


 case 1:		
                temp          
               ...............
	       |  5   | NULL |
     key=5     ...............


 case 2:
	   prev=NULL;
	   curr=root;
	   while(curr!=NULL)
	   {
		if(key==curr->info) break;
		prev=curr;
		curr->curr->link;
	   }
	   if(curr==NULL)
	   {
		printf("key not found\n");
		return root;
	   }
	   else
	   {
	     prev->link=curr->link
	     curr->link=NULL
	     return root;
	   }


					4 .................
					  .  		  .
 p=N	root               prev           .   curr        .      next
	 ...........    .............     . ............  .   ............
key=25	|  5  |  --|--->|  10  |  ---|----> | 15  | NULL|  -->|  20 |  N  |
	 ...........    .............       ............       ............



 Function: delete_key()

	   if(root==NULL)
		printf("Linked list is empty and hence deletion is not possible\n");

	   if(key==root->info)

		temp=root;
		root=root->link
		temp->link=NULL;
		free(temp);
		return root;

	   prev,curr,temp;
	   prev=NULL;
	   curr=root;
	   while(curr!=NULL)
	   {
		if(key==curr->info) break;
		prev=curr;
		curr=curr->link;
	   }
	   if(curr==NULL)
	   {
		printf("key not found\n");
		return root;
	   }
	   else
	   {
	     prev->link=curr->link
	     curr->link=NULL
	     return root;
	   }

---------------------------------------------------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int info;
	struct node *link;
};
typedef struct node *NODE;

NODE getnode()
{
	NODE p;

	p=(NODE)malloc(sizeof(struct node));
	if(p==NULL)
	{
		printf("insufficient memory\n");
		exit(0);
	}
	return p;

}
NODE insert_front(NODE root,int item);
NODE delete_key(NODE root,int key);
NODE display(NODE root);

void main()
{
	NODE root=NULL;
	int item;
	int choice;
	int key;

	for(;;)
	{
		printf("1:insert the first linked list\t 2:delete key\n");
		printf("3:display\t 4:exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("Enter the item to be inserted in the First Linked List\n");
				scanf("%d",&item);
				root=insert_front(root,item);
				break;

			case 2: printf("Read key\n");
				scanf("%d",&key);
				root=delete_key(root,key);
				break;

			case 3: display(root);
				break;

			case 4: exit(0);
		}
	}
}

NODE insert_front(NODE root,int item)
{
	NODE temp;
	temp=getnode();
	temp->info= item;
	temp->link= root;
	return temp; 		// return  address of first node.
}

NODE delete_key(NODE root, int key)
{
	NODE prev,curr,temp;
	if(root==NULL)
	{
		printf("Linked list is empty and hence deletion is not possible\n");
		return root;
	}

	if(key==root->info)
	{

		temp=root;
		root=root->link;
		temp->link=NULL;
		free(temp);
		return root;
	 }

	 prev=NULL;
	 curr=root;
	 while(curr!=NULL)
	 {
		if(key==curr->info)
		break;
		prev=curr;
		curr=curr->link;
	 }
	 if(curr==NULL)
	 {
		printf("key not found\n");
		return root;
	 }
	 else
	 {
	     prev->link=curr->link;
	     curr->link=NULL;
	     return root;
	 }
}



NODE display(NODE root)
{

	NODE temp;
	if(root==NULL)
	{
		printf("Linked List is empty\n");
		return root;
	}
	temp=root;
	while(temp!=NULL)
	{
		printf("%d\t",temp->info);
		temp=temp->link;
	}
	return root;
}




//--------------------------------------------------------------------------