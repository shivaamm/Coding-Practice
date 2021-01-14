// Should return data of node at given index. The function may
//  assume that there are at least index+1 nodes in linked list
int GetNth(struct node* head, int index){
  
  struct node* temp=head;
  while((index-1)!=0)
  {
      temp=temp->next;
      index--;
  }
  return temp->data;
  
}
