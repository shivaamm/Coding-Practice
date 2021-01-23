void create(int data) {  
    //Create a new node  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
      
    //If list is empty  
    if(head == NULL) {  
        //Both head and tail will point to newNode  
        head = tail = newNode;  
        //head's previous will point to NULL  
        head->previous = NULL;  
        //tail's next will point to NULL, as it is the last node of the list  
        tail->next = NULL;  
    }  
    else {  
        //newNode will be added after tail such that tail's next will point to newNode  
        tail->next = newNode;  
        //newNode's previous will point to tail  
        newNode->previous = tail;  
        //newNode will become new tail  
        tail = newNode;  
        //As it is last node, tail's next will point to NULL  
        tail->next = NULL;  
    }  
}
