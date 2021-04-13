#include <iostream>
#include <cstring>
#include "student.h"

using namespace std;

Student::Student(char* userinput) {

  firstname = userinput;
  
}

char* Student::getFirstname() {

  return firstname;

}

//sets the lastname variable equal to char pointer userinput
void Student::setLastname(char* userinput) {

  lastname = userinput;
  
}

//gets and returns lastname variable when called
char* Student::getLastname() {

  return lastname;
    
}

void Student::setStudentid(int userinput) {

  studentid = userinput;
  
}

int Student::getStudentid() {

  return studentid;
  
}

void Student::setGPA(float userinput) {
  
  gpa = userinput;
  
}

float Student::getGPA() {

  return gpa;
  
}




