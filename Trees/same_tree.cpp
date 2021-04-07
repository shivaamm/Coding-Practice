class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
          if(p && q){       //Condition to ensure both p and q are not NULL           
            if(p->val==q->val){   //If they have same values again call the function with right and left child
            return (isSameTree(p->left,q->left) && isSameTree(p->right,q->right)) ; 
             }else{
                return false ;   //Else if values are different return false
			}
        }
        else if(p==NULL && q==NULL){   //If both are NULL then also return true
            return true ;               
        }
        else{
            return false ;     //return false if one is NULL and other is not.
        }
    }
};
