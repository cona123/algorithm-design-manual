#include "linklist.h"
int main() {
  node* head = new node;
  head->value = 1;
  //node* temp = head;
  insertnode(&head,2);
  insertnode(&head,3);
  insertnode(&head,4);

  //head = temp;
  print(head);
  std::cout<<std::endl;
  removenode(head,3);
  print(head);
}