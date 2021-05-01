//Function to return the decoded string.

string decodeHuffmanData(struct MinHeapNode* root, string binaryString)
{
    // Code here
    string ans="";
    if(root==NULL)
    return ans;
    
    MinHeapNode* curr=root;
    for(int i=0;i<binaryString.size();i++){
        if(binaryString[i]=='0')
        curr=curr->left;
        else
        curr=curr->right;
        if(curr->left==NULL && curr->right==NULL)
         {
             ans+=curr->data;
             curr=root;
         }
    }
    return ans+'\0';
}


*****************************************************************************************************************


// string decodeHuffmanData(struct MinHeapNode* root, string binaryString)
// {
//     string s=binaryString;
//     struct MinHeapNode *c=root;
//     string ans="";
//     for(int i=0;i<s.size();i++){
//         if(s[i]=='0'){
//             c=c->left;
//         }
//         else{
//             c=c->right;
//         }
//         if(!c->left&&!c->right){
//             ans+=c->data;
//             c=root;
//         }
//     }
//     return ans;
// }


*****************************************************************************************************************



// string decodeHuffmanData(struct MinHeapNode* root, string code)
// {
//     // Code here

//     string res="";
    
//     MinHeapNode* cur=root;
//     for(int i=0;i<code.length();i++)
//     {
//         if(cur->data=='$')
//         {
//             if(code[i]=='0')
//             cur=cur->left;
            
//             else cur=cur->right;
//         }
        
//         if(cur->data!='$')
//         {
//             res=res+cur->data;
//             cur=root;
//         }
//     }
    
//     return res;
// }
