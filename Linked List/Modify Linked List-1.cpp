#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
	while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
class Solution{
    public:
    struct Node* modifyTheList(struct Node *head)
    {
        //add code here.
        // A vector to store the original elements
        // of the linked list.(say v)
        vector<int> v;
        struct Node* node = head;
        while(node){
            v.push_back(node->data);
            node = node->next;
        }
        
        // odd dectects if the number of
        // elements are odd or not, which has proven
        // easy to solve further problem.
        bool odd = false;
        int n = v.size();
        if(n%2) odd = true;
        
        // a vector 't' to store the first half of the
        // element.
        // This would temporarily store 1st half
        // and would be used as a replacement for
        // the 2nd half of the array.
        vector<int> t;
        for(int i=0;i<(odd ? (n-1)/2 : n/2); i++)
            t.push_back(v[i]);
        
        // Performing the first operation in v
        // i.e subtracting the (n-i-1)the element
        // with the ith element, and storing it in
        // ith index.
        for(int i=0;i<(odd ? (n-1)/2 : n/2);i++){
            v[i] = v[n-i-1] - v[i];
        }
        
        // Performing the second operation in v
        // i.e storing the unmodified first half
        // of the array elements in the second
        // half of the array. For this purpose only
        // we used 't' vector as a temporary store house
        // for the first half of the array elements.
        int i = t.size()-1;
        for(int j=(odd ? (n-1)/2 + 1 : n/2); j<n;j++){
            v[j] = t[i--];
        }
        
        // a new head of a new linked list.
        // simply creating a new linked list with new
        // set of elements, and returning the head of
        // the linkedlist as ans.
        struct Node* h = new Node(v[0]);
        struct Node* ans = h;
        for(int i=1;i<n;i++){
            struct Node* node = new Node(v[i]);
            h->next = node;
            h = node;
        }
        
        return ans;
    }
  
  
  ******************************************************************************************************************************************
    
    
    vector<int> v;
        struct Node* curr=head;
        while(curr != NULL) {
            v.push_back(curr->data);
            curr = curr->next;
        }
        int n=v.size();
        for(int i=0;i<n/2;i++) {
            v[n-1-i] = (v[n-1-i]-v[i]);
            swap(v[i],v[n-1-i]);
        }
        curr = head;
        int i=0;
        while(curr != NULL) {
            curr->data = v[i++];
            curr = curr->next;
        }
        return head;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;
		}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
		
	}
    return 0;
}
// } Driver Code Ends
