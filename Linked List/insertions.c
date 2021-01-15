#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head,*temp,*newnode;
void create()
{
	int n,i;
	printf("enter the size");
	scanf("%d",&n);
	head=NULL;
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		
		if(head==NULL)
		{
			head=newnode;
		}
		else
		{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
			}	
			temp->next=newnode;
		}
	}
}
void insert1()
{
	/*struct node;
	{
		int data;
		struct node*next;
	};
	struct node*head,*newnode;*/
    newnode=(struct node*)malloc(sizeof(struct node));
    
    printf("enter data want to insert");
    scanf("%d",&newnode->data);
    
    newnode->next=head;
    head=newnode;
}
void insert2()
{
/*struct node;
	{
		int data;
		struct node*next;
	};
	struct node*head,*newnode;*/

    newnode=(struct node*)malloc(sizeof(struct node));
    
     printf("enter the data");
     scanf("%d",&newnode->data);
		newnode->next=NULL;
		temp=head;
		while(temp->next!=NULL)
		{
		
		 temp=temp->next;
	    }
		 temp->next=newnode;			
}
void insert3()
{
	int pos,i=1,n;
	/*struct node;
	{
		int data;
		struct node*next;
	};
	struct node*head,*newnode;*/

    newnode=(struct node*)malloc(sizeof(struct node));
    
    printf("enter the pos");
    scanf("%d",&pos);
    
    if(pos>n)
    {
    	printf("invalid");
	}
	else
	{
		temp=head;
		while(i<pos)
		{
			temp=temp->next;
			i++;		
		}
		printf("enter te data");
		scanf("%d",&newnode->data);
		newnode->next=temp->next;
		temp->next=newnode;
	}
}
int main()
{
	create();
	insert1();
	insert2();
	insert3();
	if(head==NULL)
	{
		printf("list is empty");
	}
	else
	{
	temp=head;
	 while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
return 0;
}
