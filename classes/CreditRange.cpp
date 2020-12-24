#include <iostream>
#include "../headers/CreditRange.h"
using namespace std;

CreditRange::CreditRange() {
    min = 0;
    max = 0;
}

CreditRange::CreditRange(int pVal) {
    min = pVal;
    max = pVal;
}

CreditRange::CreditRange(int pMin, int pMax) {
    min = pMin;
    max = pMax;
}