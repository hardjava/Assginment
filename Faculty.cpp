#include <iostream>
#include "Faculty.h"

using namespace std;

Faculty::Faculty(const string &newName, const string &newPhoneNumber, int newTotalAmount, const string &newEmployeeId,
                 const string &newDepartment, const string &newExtensionNumber) : Donator(newName, newPhoneNumber,
                                                                                          newTotalAmount),
                                                                                  employeeId(newEmployeeId),
                                                                                  department(newDepartment),
                                                                                  extensionNumber(newExtensionNumber) {
}

const string &Faculty::getKey() const {
    return employeeId;
}

const string Faculty::toString() const {
    return "[Faculty] " + getName() + "(" + employeeId + ", Dept:" + department + "(x" + extensionNumber + ")) " +
           getPhoneNumber() + " $" + to_string(getTotalAmount());
}