#include <iostream>
#include "../headers/Class.h"
#include "../headers/CreditRange.h"
using namespace std;

Class::Class(string pSubj, string pNum, string pTitle, string pDesc, vector<string> pReqs, CreditRange pCredits) {
    subj = pSubj;
    num = pNum;
    title = pTitle;
    desc = pDesc;
    reqs = pReqs;
    credits = pCredits;
}