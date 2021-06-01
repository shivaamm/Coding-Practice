//Function to push an integer into the stack.
void MyStack ::push(int x) {
    StackNode *node = (StackNode*)malloc(sizeof(StackNode));
    node->data = x;
    node->next = top;
    top = node;
}

/* The method pop which return the element
  poped out of the stack*/
int MyStack ::pop() {
    if(!top){return -1;}
    int res = top->data;
    StackNode *temp = top;
    top = top->next;
    free(temp);
    return res;
}
