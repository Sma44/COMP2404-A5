#include <iostream>
using namespace std;

#include "List.h"

List::List() : head(nullptr) { }

List::~List()
{
  Node* currNode = head;
  Node* nextNode;

  while (currNode != nullptr) {
    nextNode = currNode->next;
    delete currNode->data;
    delete currNode;
    currNode = nextNode;
  }
}




