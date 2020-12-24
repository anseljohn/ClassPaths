#include <iostream>
#include "../headers/Class.h"
using namespace std;

Class::Class(string pSubj, int pNum, string pDesc, vector<string> pReqs, int pCredits) {
    subj = pSubj;
    desc = pDesc;
    num = pNum;
    reqs = pReqs;
    credits = pCredits;
}