#include <iostream>
#include <cstring>

#include "Node.h"


//constructor
Node::Node(Student* studnt) {

  student = studnt;
  next = NULL;

}

Student* Node::getStudent() {

  return student;
  
}

void Node::setNext(Node* newnext) {

  next = newnext;

}

Node* Node::getNext() {

  return next;
  
}

//destructor
Node::~Node() {

  delete student;

}
