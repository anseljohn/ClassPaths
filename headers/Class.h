#ifndef CLASS_H
#define CLASS_H
#include <vector>
using namespace std;

class Class {
  public:
    Class(string pSubj, int pNum, string pTitle, string pDesc, vector<string> pReqs, CreditRange pCredits);
    string subj;
    int num;
    string title;
    string desc;
    vector<string> reqs;
    CreditRange credits;
};
#endif