https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1/?problemStatus=unsolved&page=1&category[]=Linked%20List&query=problemStatusunsolvedpage1category[]Linked%20List#

#include<unordered_map>                 ////////////////////////////// add these otherwise it will show error
typedef Node node;
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
