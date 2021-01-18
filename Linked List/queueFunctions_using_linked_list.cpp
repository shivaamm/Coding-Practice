    struct node* front;
    struct node* rear;

void enqueue()
{
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    
    if(front==0 && rear==0)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}

void display()
{
    struct node* temp;
    if(front==0 && rear==0)
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        temp=front;
        while(temp!=0)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}

void dequeue()
{
    struct node* temp;
    temp=front;
    if(front==0 && rear==0)
    {
        cout<<"Empyty"<<endl;
    }
    else
    {
        cout<<front->data<<" ";
        front=front->next;
        delete(temp);
    }
}



