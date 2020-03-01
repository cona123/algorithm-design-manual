#ifndef LINKLIST_H_
#define LINKLIST_H_
#include <iostream>
struct node
{
  int value;
  node* next;
};

void print(node* head) {
  if(head != nullptr) {
    std::cout<< " "<< head->value;
    print(head->next);
  }
}

node* searchnode(node* head, const int& val) {
  if(head == nullptr) {
    return head;
  }
  if(head->value == val) {
    return head;
  } else {
    return searchnode(head->next,val);
  }
}

void insertnode(node** head, const int& val) {
  node* newnode = new node;
  newnode->value = val;
  newnode->next = *head;
  *head = newnode;
  return;
}

node* findpre(node*head, const int& val) {
  if(head == nullptr || head->next == nullptr) {
    return nullptr;
  }
  if(head->next->value == val) {
    return head;
  } else {
    return findpre(head->next, val);
  }
}

void removenode(node* head, const int& val) {
  if(head->value == val) {
    node* rmnode = head;
    head = head->next;
    delete rmnode;
    return;
  } else {
    node* temp = head;
    node* prenode = findpre(head,val);
    if(prenode == nullptr) {
      return;
    } else {
      node* rmnode = prenode->next;
      prenode->next = rmnode->next;
      delete rmnode;
      head = temp;
      return;
    }
  }
}
#endif