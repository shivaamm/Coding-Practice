// Insert at any position
/*
Input:
LinkedList: 25->36->47->58->69->80
data: 19
Output: 19 25 36 47 58 69 80

Input:
LinkedList: 50->100
data: 75
Output: 50 75 100
*/


// Should return head of the modified linked list
Node *sortedInsert(struct Node* head, int data) {
   
    Node *temp = new Node(data);
    //temp->data = data;
    temp->next = NULL;
    if(data < head->data){
        temp->next = head;
        return temp;
    }
    
    Node *curr= head;
    Node *next = NULL;
    while(curr && curr->next && data > curr->next->data){
        //prev = curr;
        curr =curr->next;
    }
    next = curr->next;
    curr->next = temp;
    temp->next = next;
    return head;
}
