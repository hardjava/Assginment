#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(const string &newName, const string &newPhoneNumber, int newTotalAmount, const string &newStudentId,
                 const string &newMajor)
        : Donator(newName, newPhoneNumber, newTotalAmount), studentId(newStudentId), major(newMajor) {

}

const string &Student::getKey() const {
    return studentId;
}

const string Student::toString() const {
    return "[Student] " + getName() + "(" + studentId + ", Major:" + major + ") " + getPhoneNumber() + " $" +
           to_string(getTotalAmount());
}
