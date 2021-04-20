class Solution
{
    public:
    bool check(Node* r1,Node*r2)
    {
        if(r1==NULL && r2!=NULL || r1!=NULL && r2==NULL)
            return false;
        else if(r1==NULL && r2==NULL)
            return true;
        else{
            if(r1->data!=r2->data)
                return false;
            return check(r1->left,r2->left) && check(r1->right,r2->right);
        }
            
    }
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
         return check(r1,r2);
    }
};
