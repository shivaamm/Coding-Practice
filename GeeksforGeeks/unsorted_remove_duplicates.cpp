// Function to remove duplicates from the linked list
// root: root of the linked list
Node * removeDuplicates( Node *head) 
{
    // Hash to store seen values  (((USING HASHING)))
    unordered_set<int> seen;
 
    /* Pick elements one by one */
    struct Node *curr = head;
    struct Node *prev = NULL;
    while (curr != NULL)
    {
        // If current value is seen before
        if (seen.find(curr->data) != seen.end())
        {
           prev->next = curr->next;
           delete (curr);
        }
        else
        {
           seen.insert(curr->data);
           prev = curr;
        }
        curr = prev->next;
    }
    return head;
}
    
    //  struct Node *ptr1, *ptr2, *dup;      (((USING TWO LOOPS)))
    // ptr1 = head;
 
    // /* Pick elements one by one */
    // while (ptr1 != NULL && ptr1->next != NULL)
    // {
    //     ptr2 = ptr1;
 
    //     /* Compare the picked element with rest
    //       of the elements */
    //     while (ptr2->next != NULL)
    //     {
    //         /* If duplicate then delete it */
    //         if (ptr1->data == ptr2->next->data)
    //         {
    //             /* sequence of steps is important here */
    //             dup = ptr2->next;
    //             ptr2->next = ptr2->next->next;
    //             delete(dup);
    //         }
    //         else /* This is tricky */
    //             ptr2 = ptr2->next;
    //     }
    //     ptr1 = ptr1->next;
    // }
    // return head;
