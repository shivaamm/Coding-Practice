void MyStack ::push(int x) {
    // Your Code
    struct StackNode* newnode = (struct StackNode*) malloc(sizeof(struct StackNode));
   newnode->data = x;
   newnode->next = top;
   top = newnode;
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
