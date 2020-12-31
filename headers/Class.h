#ifndef CLASS_H
#define CLASS_H
#include <vector>
#include "Credits.h"
using namespace std;

class Class {
  public:
    Class(ClassName className, string desc, Requirements reqs, Credits credits);
    ClassName className;
    string desc;
    Requirements reqs;
    Credits credits;
  private:
};
#endif