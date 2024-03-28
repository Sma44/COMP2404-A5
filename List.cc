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

void List::del(string n, Student** stu)
{
  Node* prevNode = nullptr;
  Node* currNode = head;

  while (currNode != nullptr) {
    if (currNode->data->getName() == n)
      break;

    prevNode = currNode;
    currNode = currNode->next;
  }

  if (currNode == nullptr) {
    *stu = nullptr;
    return;
  }

  if (prevNode == nullptr) {
    head = currNode->next;
  }
  else {
    prevNode->next = currNode->next;
  }

  *stu = currNode->data;
  delete currNode;

}

void List::add(Student* stu)
{
  Node* newNode;
  Node* prevNode;
  Node* currNode;

  newNode = new Node;
  newNode->data = stu;
  newNode->next = nullptr;

  currNode = head;
  prevNode = nullptr;

  while (currNode != nullptr) {
    if (currNode->data->getName() > stu->getName())
      break;

    prevNode = currNode;
    currNode = currNode->next;
  }

  if (prevNode == nullptr) {
    head = newNode;
  }
  else {
    prevNode->next = newNode;
  }

  newNode->next  = currNode;
}

void List::print() const
{
  Node* currNode = head;

  while (currNode != nullptr) {
    currNode->data->print();
    currNode = currNode->next;
  }
}


