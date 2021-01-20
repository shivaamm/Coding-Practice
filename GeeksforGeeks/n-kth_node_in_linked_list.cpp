/*
Input:
2
6
1 2 3 4 5 6
2
5
2 7 9 3 5
3

Output:
3
7

Explanation:
Testcase 1: 6/2th element is the 3rd(1-based indexing) element which is 3.
*/

int fractional_node(struct Node *head, int k)
{
    Node* curr=head;
    Node* find=head;
    int count=0;
    while(curr->next!=NULL)
    {
        count=count+1;
        curr=curr->next;
    }
    int n=ceil(count/k);
    for(int i=0;i<n;i++)
    {
        find=find->next;
    }
    return find->data;
}
