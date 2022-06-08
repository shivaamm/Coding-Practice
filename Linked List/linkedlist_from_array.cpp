Creating Linked List from the given Array

#include <iostream>
using namespace std;

// Representation of a node
struct Node {
	int data;
	Node* next;
};

// Function to insert node
void insert(Node** root, int item)
{
	Node* temp = new Node;
	temp->data = item;
	temp->next = *root;
	*root = temp;
}

void display(Node* root)
{
	while (root != NULL) {
		cout << root->data << " ";
		root = root->next;
	}
}

Node *arrayToList(int arr[], int n)
{
	Node *root = NULL;
	for (int i = n-1; i >= 0 ; i--)
		insert(&root, arr[i]);
	return root;
}

// Driver code
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	Node* root = arrayToList(arr, n);
	display(root);
	return 0;
}
