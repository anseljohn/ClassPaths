#include <iostream>
#include "../headers/Class.h"
#include "../headers/Credits.h"
#include "../headers/Requirements.h"
#include "../headers/ClassName.h"
using namespace std;

Class::Class(ClassName className, string desc, Requirements reqs, Credits credits) {
    this->className = className;
    this->desc = desc;
    this->reqs = reqs;
    this->credits = credits;
}