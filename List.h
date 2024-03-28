#ifndef LIST_H
#define LIST_H

template<class T>
class List {
  class Node {
    public:
      T*    data;
      Node* next;
  };

  public:
    List();
    ~List();
    T* operator+=(T*);
    void convertToArray(T*, int&);

  private:
    Node* head;
};

#endif

