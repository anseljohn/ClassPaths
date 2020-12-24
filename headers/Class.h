#ifndef CLASS_H
#define CLASS_H
#include <vector>
#include "CreditRange.h"
using namespace std;

class Class {
  public:
    Class(string pNum, string pTitle, string pDesc, Requirements pReqs, CreditRange pCredits);
    string subj;
    string num;
    string title;
    string desc;
    Requirements reqs;
    CreditRange credits;
  private:
};
#endif