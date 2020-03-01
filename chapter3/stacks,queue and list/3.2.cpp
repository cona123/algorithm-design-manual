// Write a program to reverse the direction of a given singly-linked list. In other
// words, after the reversal all pointers should now point backwards. Your algorithm
// should take linear time.
#include "linklist.h"
node* reverselist(node* head) {
  if (head == nullptr || head->next == nullptr) {
    return head;
  }
  node* pre = head;
  node* current = head->next;
  pre->next = nullptr;
  while(current != nullptr) {
    node* beforepre = pre;
    pre = current;
    current = current->next;
    pre->next = beforepre;
  }
  return pre;
}

int main()
{
  node* head = new node;
  head->value = 2;
  head->next = nullptr;
  insertnode(&head, 3);
  insertnode(&head, 4);
  insertnode(&head, 5);
  insertnode(&head, 6);
  print(head);
  std::cout<<std::endl;
  head = reverselist(head);
  print(head);
  std::cout<<std::endl;
}