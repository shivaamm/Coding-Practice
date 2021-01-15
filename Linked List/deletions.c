#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head,*temp,*newnode;
struct node*del,*last,*nextnode;
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
void delete1()
{
	
	if(head==NULL)
	{
		printf("list is empty");
		
	}
	else
	{
		del=head;
		head=head->next;
		free(del);
	}
}
void delete2()
{
		if(head==NULL)
	{
		printf("list is empty");
		
	}
	else
	{
		del=head;
		last=head;
		while(del->next!=NULL)
		{
			last=del;
			del=del->next;
		}
		if(del==head)
		{
			head=NULL;
		}
		else
		{
			last->next=NULL;
		}
		free(del);
	}
}
void delete3()
{
	int pos;
	int i=1;
	temp=head;
	printf("Enter pos");
	scanf("%d",&pos);
	
	while(i<(pos-1))
	{
		temp=temp->next;
		i++;
	}
	nextnode=temp->next;
	temp->next=newnode->next;
	free(nextnode);
}
void display()
{
		if(head==NULL)
	{
		printf("list is empty");
	}
	else
	{
	temp=head;
	 while(temp!=NULL)
	{
		printf("\n%d ",temp->data);
		temp=temp->next;
	}
  } 
}
int main()
{
	create();
	delete1();
	display();
	delete2();
	delete3();
    display();
return 0;
}
