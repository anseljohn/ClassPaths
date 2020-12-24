#include <iostream>
#include "../headers/Class.h"
using namespace std;

Class::Class(string pSubj, int pNum, string pTitle, string pDesc, vector<string> pReqs, string pCredits) {
    subj = pSubj;
    num = pNum;
    title = pTitle;
    desc = pDesc;
    reqs = pReqs;
    credits = pCredits;
}