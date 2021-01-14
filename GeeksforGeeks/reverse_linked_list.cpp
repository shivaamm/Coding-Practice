// Should reverse list and return new head.
struct Node* reverseList(struct Node *head)
{
    // code here
    // return head of reversed list
    struct Node *prevNode, *curNode;

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
    return head;
}
