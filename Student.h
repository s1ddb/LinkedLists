#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstring>


class Student {

 public:

  Student(char*);
  char* getFirstname();

  void setLastname(char*);
  char* getLastname();

  void setStudentid(int);
  int getStudentid();

  void setGPA(float);
  float getGPA();

 private:

  char*firstname;
  char*lastname;
  int studentid;
  float gpa;


};

#endif
