#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <cstring>

#include "Student.h"

class Node {

 public:

  Node(Student*);
  Student* getStudent();

  void setNext(Node*);
  Node* getNext();

  ~Node(); //des

 private:

  Student* student;
  Node* next;

};

#endif
