/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool check(TreeNode* r1,TreeNode*r2)
    {
        if(r1==NULL && r2!=NULL || r1!=NULL && r2==NULL)
            return false;
        else if(r1==NULL && r2==NULL)
            return true;
        else{
            if(r1->val!=r2->val)
                return false;
            return check(r1->left,r2->left) && check(r1->right,r2->right);
        }
            
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return check(p,q);
    }
};


// class Solution {
// public:
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//           if(p && q){       //Condition to ensure both p and q are not NULL           
//             if(p->val==q->val){   //If they have same values again call the function with right and left child
//             return (isSameTree(p->left,q->left) && isSameTree(p->right,q->right)) ; 
//              }else{
//                 return false ;   //Else if values are different return false
// 			}
//         }
//         else if(p==NULL && q==NULL){   //If both are NULL then also return true
//             return true ;               
//         }
//         else{
//             return false ;     //return false if one is NULL and other is not.
//         }
//     }
// };
