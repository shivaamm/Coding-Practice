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
/*
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
*/
int main()
{
	create();
// 	insert1();
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
