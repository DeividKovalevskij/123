#include <stdio.h>
#include <stdlib.h>
struct node {
 int data;
 struct node *next;
 struct node *prev;
};
struct node* head = NULL;
void insert_node(int data) {
 struct node* new_node = (struct node*) malloc(sizeof(struct node));
 new_node->data = data;
 new_node->next = head;
 new_node->prev = NULL;
 if (head != NULL) {
 head->prev = new_node;
 }
 head = new_node;
}
void traverse_list() {
 struct node* temp = head;
 while (temp != NULL) {
 printf("%d ", temp->data);
 temp = temp->next;
 }
}
int main() {
 insert_node(10);
 insert_node(15);
 insert_node(19);
 insert_node(20);
 traverse_list();
 return 0;
}
