https://www.techiedelight.com/find-maximum-width-given-binary-tree/

Recursive approach

#include <iostream>
#include <unordered_map>
using namespace std;
 
// Data structure to store a binary tree node
struct Node
{
    int key;
    Node *left, *right;
 
    Node(int key)
    {
        this->key = key;
        this->left = this->right = nullptr;
    }
};
 
// Traverse the tree in a preorder fashion and store the count of nodes
// in each level
void preorder(Node* root, int level, auto &map)
{
    // base case: empty tree
    if (root == nullptr) {
        return;
    }
 
    // increment count of nodes at the current level
    map[level]++;
 
    // recur for the left and right subtree by increasing the level by 1
    preorder(root->left, level + 1, map);
    preorder(root->right, level + 1, map);
}
 
// Recursive function to find the maximum width of a binary tree
void findMaxWidth(Node* root)
{
    // create an empty map to store the count of nodes in each level
    unordered_map<int, int> map;
 
    // traverse the tree and fill the map
    preorder(root, 1, map);
 
    // stores the maximum width
    int result = 0;
 
    // iterate through the map and update maximum width
    for (auto it: map) {
        result = max(result, it.second);
    }
 
    cout << "The Maximum width is " << result;
}
 
int main()
{
    Node* root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->left = new Node(8);
    root->left->right = new Node(12);
    root->right->left = new Node(16);
    root->right->right = new Node(25);
 
    findMaxWidth(root);
 
    return 0;
}
