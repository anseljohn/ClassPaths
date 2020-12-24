#ifndef CREDITRANGE_H
#define CREDITRANGE_H
#include <iostream>
using namespace std;

 class CreditRange{
    public:
        CreditRange();
        CreditRange(int pVal);
        CreditRange(int pMin, int pMax);
        int min;
        int max;
};
#endif