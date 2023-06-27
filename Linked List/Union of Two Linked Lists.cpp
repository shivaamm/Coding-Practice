/*
// structure of the node is as follows

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
class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        // using set
        
        if(head1==NULL || head2 == NULL) return head1==NULL?head2:head1;
        set<int> st;
        while(head1 != NULL){
            st.insert(head1->data);
            head1=head1->next;
        }
        while(head2 != NULL){
            st.insert(head2->data);
            head2=head2->next;
        }
        Node* dummy=new Node(0);
        Node* ptr= dummy;
        for(auto it: st){
            ptr->next=new Node(it);
            ptr=ptr->next;
        }
        return dummy->next;
        
        
        // **********************************************************************
        // using map below
        
        map<int,Node*>mp;
        Node* cur=head1;
        while(cur){
            mp[cur->data]=cur;
            cur=cur->next;
        }
        cur=head2;
        while(cur){
            mp[cur->data]=cur;
            cur=cur->next;
        }
        Node* ans=new Node(0),*res=ans;
        for(auto it:mp){
            ans->next=it.second;
            ans=ans->next;
        }
        ans->next=NULL;
        return res->next;
    }
};
