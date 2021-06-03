vector<int> displayList(Node *head)
{
    vector <int> v;
     Node *curr=head; 
    while(head!=NULL)
    {
     v.push_back(head->data);
     head=head->next;
    }
    return(v);
}
