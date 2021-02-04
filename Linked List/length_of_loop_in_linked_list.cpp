https://practice.geeksforgeeks.org/problems/find-length-of-loop/1/?problemStatus=unsolved&page=1&category[]=Linked%20List&query=problemStatusunsolvedpage1category[]Linked%20List

// Your task is to complete the function this function
// function should return the size of the loop

#include<unordered_map>
int  detectLoop(Node* head)
{
    // your code here
    unordered_map<Node*,int>map;
    Node*temp=head;
    int k=0;
    while(temp!=NULL){
        if(map.count(temp)>0){
            
            return k-map[temp];
        }
        map[temp]=k;
        k++;
        temp=temp->next;
    }
    return 0;
}
int countNodesinLoop(struct Node *head)
{
    return  detectLoop( head);
}


// int countNodesinLoop(struct Node *head)
// {
//     int res=1;
//      Node *slow = head;
//      Node *fast = head;
//      while(slow && fast &&fast->next)
//      {
//          slow = slow->next;
//          fast = fast->next->next;
//          if(slow == fast)
//          {
//              Node *temp = slow;
//              while(temp->next != slow)
//              {
//                 res++;
//                 temp = temp->next;
//              }
//              return res;
//          }
//      }
//      return 0;
// }


// unordered_map<Node*, int> m;
//     Node *ptr = head;
//     while(ptr!=NULL)
//     {
//         if(m[ptr]==0)
//         {
//             m[ptr]++;
//         }
//         else
//         {
//             break;
//         }
//         ptr = ptr->next;
//     }
//     if(ptr!=NULL)
//     {
//         Node* nptr;
//         nptr = ptr;
//         int l = 1;
//         while(nptr->next!=ptr)
//         {
//             l++;
//             nptr = nptr->next;
//         }
//         return l;
//     }
//     return 0;
