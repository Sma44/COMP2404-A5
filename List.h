#ifndef LIST_H
#define LIST_H

template<class T>
class List {
  class Node {
    public:
      T    data;
      Node* next;
  };

  public:
    List();
    ~List();
    T operator+=(T);
    void convertToArray(T, int&);

  private:
    Node* head;
};

template<class T>
List<T>::List() : head(nullptr) { }

template<class T>
List<T>::~List()
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

template<class T>
T List<T>::operator+=(T data){
  Node* newNode = new Node();
  newNode->data = data; 
  newNode->next = nullptr;

  Node* currNode = head;
  Node* prevNode = nullptr;

  while (currNode != null){
    prevNode = currNode;
    currNode = currNode->next;
  }

  if (prevNode == nullptr){
    head = newNode;
  } else {
    prevNode->next = newNode;
  }
}

template<class T>
void List<T>::convertToArray(T arr, int& size){
  Node* currNode;
  size = 0;

  while(currNode != null){
    arr[size] = currNode->data;
    size++;
    currNode = currNode->next;
  }
}


#endif

