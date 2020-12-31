#include <iostream>
#include <vector>
#include "../headers/Requirement.h"
#include "ClassName.cpp"
using namespace std;

Requirement::Requirement(ClassName className, bool canBeConcurrent, vector<ClassName> substitutes) {
    this->className = className;
    this->canBeConcurrent = canBeConcurrent;
    this->substitutes = substitutes;
}
