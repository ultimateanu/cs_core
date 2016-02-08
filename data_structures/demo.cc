#include<iostream>

#include "data_structures/linked_list.h"

using namespace std;

int main(){
  Node c = {3, nullptr};
  Node b = {2, &c};
  Node a = {1, &b};

  Print(&a);
  return 0;
}
