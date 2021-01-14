// function should return sum of last n nodes
int sumOfLastN_Nodes(struct Node* head, int n)
{
    if (n <= 0) 
        return 0; 
        
      struct Node* temp;
      temp=head;
      int count=0,sum=0;
      while(temp!=NULL) // calculate the length of the linked list
      {
          temp=temp->next;
          count++;
      }
    //   return count;
    count=count-n;       // count of first (count - n) nodes 
    temp=head;
    while(count){     // just traverse the 1st 'new count(which is n's 1st node) nodes
        count--;
        temp=temp->next;
    }
      while(temp!=NULL)    // now traverse the last 'n' nodes and add them 
      {
          sum+=temp->data;
          temp=temp->next;
      }
      return sum;
}
