/*
Input:
2
7
1 2 3 4 5 6 7
3
5
19 28 37 46 55
2

Output:
6
46

Explanation:
Testcase 1: Node from the last which is divisible by 3 is 6.
*/

// function should return the modular Node
// if no such node is present then return -1
int modularNode(Node* head, int k)
{
	int result,index=1;
	while(head!=NULL)
	{
	    if(index%k==0)
	    result=head->data; //update the largest value in result
	    index++;
	    head=head->next;
	}
	if(index<k)
	result=-1;
	return result;
}

