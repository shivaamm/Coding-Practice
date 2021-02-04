Another recursive approach - https://www.javatpoint.com/program-to-create-a-circular-linked-list-of-n-nodes-and-display-it-in-reverse-order

#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//insert link at the first location
void insert(int data) {
   // Allocate memory for new node;
   struct node *link = (struct node*) malloc(sizeof(struct node));

   link->data = data;
   link->next = NULL;

   // If head is empty, create new list
   if(head==NULL) {
      head = link;
      head->next = link;
      return;
   }

   current = head;
   
   // move to the end of the list
   while(current->next != head)
      current = current->next;

   // Insert link at the end of the list
   current->next = link;
   
   // Link the last node back to head
   link->next = head;
   
}

//display the list
void reverse_print(struct node *list) {
   if(list->next == head) {
      printf(" %d =>",list->data);
      return;
   }
   reverse_print(list->next);
   printf(" %d =>",list->data);
   
}

int main() {
   insert(10);
   insert(20);
   insert(30);
   insert(1);
   insert(40);
   insert(56); 
   
   reverse_print(head);
   printf(" [head]\n");
   
   return 0;
}
