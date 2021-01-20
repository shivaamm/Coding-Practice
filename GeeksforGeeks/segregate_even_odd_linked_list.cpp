/*
Input
3
7
17 15 8 9 2 4 6
4
1 3 5 7
7
8 12 10 5 4 1 6

Output
8 2 4 6 17 15 9
1 3 5 7
8 12 10 4 6 5 1
*/

#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};
node *head = NULL;

void push(int k){
    node *temp = new node(), *root = head;
    temp->data = k;
    temp->next = NULL;
    if(!head)
        head = temp;
    else{
        while(root->next)
            root = root->next;
        root->next = temp;
    }
}

void print(){
    node *temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n], i;
        for(i = 0; i < n; i++)
            cin>>a[i];
        for(i = 0; i < n; i++){
            if(a[i] % 2 == 0){
                push(a[i]);
            }
        }
        for(i = 0; i < n; i++){
            if(a[i] % 2 != 0){
                push(a[i]);
            }
        }
        print();
        head = NULL;
        cout<<endl;
    }
}
