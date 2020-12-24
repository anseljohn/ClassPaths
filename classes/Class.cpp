#include <iostream>
#include "../headers/Class.h"
#include "../headers/CreditRange.h"
#include "../headers/Requirements.h"
using namespace std;

Class::Class(string pNum, string pTitle, string pDesc, Requirements pReqs, CreditRange pCredits) {
    num = pNum;
    subj = pNum.substr(0, pNum.find(' '));
    title = pTitle;
    desc = pDesc;
    reqs = pReqs;
    credits = pCredits;
}