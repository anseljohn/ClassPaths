#ifndef CLASS_H
#define CLASS_H
#include <vector>
#include "CreditRange.h"
using namespace std;

class Class {
  public:
    Class(string pSubj, string pNum, string pTitle, string pDesc, vector<string> pReqs, CreditRange pCredits);
    string subj;
    string num;
    string title;
    string desc;
    vector<string> reqs;
    CreditRange credits;
};
#endif