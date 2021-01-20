void deleteAlt(struct Node *head){
    
    if (head == NULL)  
        return;  
  
    /* Initialize prev and node to be deleted */
    Node *prev = head;  
    Node *node = head->next;  
  
    while (prev != NULL && node != NULL)  
    {  
        /* Change next link of previous node */
        prev->next = node->next;  
  
        /* Free memory */
        free(node);  
  
        /* Update prev and node */
        prev = prev->next;  
        if (prev != NULL)  
            node = prev->next;  
    }  
}

For Input:
6
1 2 3 4 5 6
your output is: 
1 3 5
