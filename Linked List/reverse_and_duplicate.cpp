#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head,*temp,*newnode;
struct node *p, *q, *prev;
void create()
{
	int n,i;
	printf("enter the size ");
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
void reverse()
{
   struct node *prevNode, *curNode;

    if(head != NULL)
    {
        prevNode = head;
        curNode = head->next;
        head = head->next;

        prevNode->next = NULL; // Make first node as last node

        while(head != NULL)
        {
            head = head->next;
            curNode->next = prevNode;

            prevNode = curNode;
            curNode = head;
        }

        head = prevNode;   // Make last node as head
    }
}
void dup_delete() //(struct node **head)
{
    
 
    p = q = prev=head;
    q = q->next;
    while (p != NULL)
    {
        while (q != NULL && q->data != p->data)
        {
            prev = q;
            q = q->next;
        }
        if (q == NULL)
        {
            p = p->next;
            if (p != NULL)
            {
                q = p->next;
            }
        }
        else if (q->data == p->data)
        {
            prev->next = q->next;
            temp = q;
            q = q->next;
            free(temp);
        }
    }
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
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
}
int main()
{
	create();
	reverse();
	dup_delete();
	display();
	
	return 0;
}
