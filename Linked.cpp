#include <iostream>
#include <cstring>

#include "Student.h"
#include "Node.h"

using namespace std;

void createStudent();
void addStudent(Student*, Node*);
void print(Node*);



int main() {

Node* head = NULL;

  return 0;
}


void createStudent() {

  char* firstname = new char[50]; // first name
  char* lastname = new char[50]; //last name
  int studentid = 0; //student's id variable
  float gpa = 0; //students gpa variable

  cout << "Enter the student's first name" << endl;
  cin.get(firstname, 50);
  cin.get(); //terminating char

  cout << "Enter the student's last name" << endl;
  cin.get(lastname, 50);
  cin.get(); //terminating char

  cout << "Enter the student's ID number" << endl;
  cin >> studentid;
  cin.get(); //terminating char

  cout << "Enter the student's GPA" << endl;
  cin >> gpa;
  cin.get(); //terminating char

  //assigning the variables and setters to the student pointer
  Student* newstudent = new Student(firstname);
  newstudent->setLastname(lastname);
  newstudent->setStudentid(studentid);
  newstudent->setGPA(gpa);

  addStudent(newstudent);

}

void addStudent(Student* newstudent, Node* next, Node* &head) {

  if (head == NULL) {
    //create a new node and create a new student to put in that node

    head = new Node(newstudent); //set head to new node
    
  } 

  if (next->getNext() == NULL) {
    next->setNext(new Node(newstudent));
  }
  
  else if (next -> getNext() != NULL) {
    addStudent(newstudent, next->getNext(), head);
  }

}


void print(Node* next) {

  if (next != NULL) {

    cout << next->getStudent()->getFirstname() << endl;
    print(next->getNext());

    cout << next->getStudent()->getLastname() << endl;
    print(next->getNext());

    cout << next->getStudent()->getStudentid() << endl;
    print(next->getNext());

    cout << next->getStudent()->getGPA() << endl;
    print(next->getNext());
  }
  
  }
