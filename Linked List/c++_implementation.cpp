#include <iostream>
 
using namespace std;
 
//Declare Node 
struct Node{
    int num;
    Node *next;
};
 
//Declare starting (Head) node
struct Node *head=NULL;
 
//Insert node at start
void insertNode(int n){
    struct Node *newNode=new Node;         //new keyword used instead of malloc
    newNode->num=n;
    newNode->next=head;
    head=newNode;
}
 
//Traverse/ display all nodes (print items)
void display(){
    if(head==NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    struct Node *temp=head;
    while(temp!=NULL){
        cout<<temp->num<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
 
//delete node from start
void deleteItem(){
    if(head==NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    cout<<head->num<<" is removed."<<endl;
    head=head->next;
}
int main(){
     
    display();
    insertNode(10);
    insertNode(20);
    insertNode(30);
    insertNode(40);
    insertNode(50);
    display();
    deleteItem(); deleteItem(); deleteItem(); deleteItem(); deleteItem();
    deleteItem();
    display();
    return 0;
}

/*
Output

    List is empty!
    50 40 30 20 10
    50 is removed.
    40 is removed.
    30 is removed.
    20 is removed.
    10 is removed.
    List is empty!
    List is empty!
*/
