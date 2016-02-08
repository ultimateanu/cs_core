#include "data/linked_list.h"

#include<iostream>

using namespace std;

void Print(Node* head) {
  while (head) {
    cout << head->val << " ";
    head = head->next;
  }
  cout << endl;
}
