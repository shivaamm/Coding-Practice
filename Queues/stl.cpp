// Functions used here:
//    q.size() = Returns the size of queue.
//    q.push() = It is used to insert elements to the queue.
//    q.pop() = To pop out the value from the queue.
//    q.front() = Returns the front element of the array.
//    q.back() = Returns the back element of the array.

#include<iostream>
#include <queue>
#include <string>
#include <cstdlib>
using namespace std;
int main() {
   queue<int> q;
   int c, i;
   while (1) {
      cout<<"1.Size of the Queue"<<endl;
      cout<<"2.Insert Element into the Queue"<<endl;
      cout<<"3.Delete Element from the Queue"<<endl;
      cout<<"4.Front Element of the Queue"<<endl;
      cout<<"5.Last Element of the Queue"<<endl;
      cout<<"6.Exit"<<endl;
      cout<<"Enter your Choice: ";
      cin>>c;
      switch(c) {
         case 1:
            cout<<"Size of the Queue: ";
            cout<<q.size()<<endl;
         break;
         case 2:
            cout<<"Enter value to be inserted: ";
            cin>>i;
            q.push(i);
         break;
         case 3:
            i = q.front();
            q.pop();
            cout<<"Element "<<i<<" Deleted"<<endl;
         break;
         case 4:
            cout<<"Front Element of the Queue: ";
            cout<<q.front()<<endl;
         break;
         case 5:
            cout<<"Back Element of the Queue: ";
            cout<<q.back()<<endl;
         break;
         case 6:
            exit(1);
         break;
         default:
            cout<<"Wrong Choice"<<endl;
      }
   }
   return 0;
}
