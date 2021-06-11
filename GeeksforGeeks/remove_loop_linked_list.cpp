https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1/?problemStatus=unsolved&page=1&category[]=Linked%20List&query=problemStatusunsolvedpage1category[]Linked%20List#

Input:
N = 3
value[] = {1,3,4}
X = 2
Output: 1
Explanation: The link list looks like
1 -> 3 -> 4
     ^    |
     |____|    
A loop is present. If you remove it 
successfully, the answer will be 1. 


#include<unordered_map>    
typedef Node node;                // declare globally otherwise it will show error
void removeLoop(Node* head)
{
    if (head == NULL || head -> next == NULL)
    return;
    unordered_map<node*, bool> visited;
    node* it = head;
    while ( it -> next != NULL && visited[it -> next] == false)
    {
        visited[it] = 1;
        it = it -> next;
    }
    if (it -> next != NULL)
    it -> next = NULL;
    return;   
}

// map<int,int>m;
//     if(node!=NULL)
//         m[node->data] = 1;
//     while(node->next!=NULL)
//     {
//         if(m.find(node->next->data)!=m.end())
//         {
//             node->next = NULL;
//             return;
//         }
//         else
//             m[node->next->data] = 1;
//     }


// unordered_set <struct Node *> list;
//      Node *cur=node;
//      int flag=0;
//      list.insert(cur);
//      while(cur!=NULL)
//      {
//          if(list.find(cur->next)==list.end())
//          {
//              list.insert(cur->next);
//              cur= cur->next;
//          }
//          else
//          {
//              flag=1;
//              cur->next= NULL;
//              break;
//          }
//      }
