#ifndef CLASS_H
#define CLASS_H
#include <vector>
using namespace std;

class Class {
  public:
    Class(string pSubj, int pNum, string pDesc, vector<string> pReqs, int pCredits);
    string subj;
    int num;
    string desc;
    vector<string> reqs;
    int credits;
};
#endif