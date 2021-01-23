int intersectPoint(Node *headA, Node *headB)
{
    if(headA == NULL || headB == NULL)
            return NULL;
        Node *a = headA , *b = headB;

        while(a != b){

            a = (a) ? a->next: headB;
            b = (b) ? b->next: headA;

        }
        int ans = a->data;
        return ans;
}
