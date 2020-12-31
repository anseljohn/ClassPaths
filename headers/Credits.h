#ifndef CREDITS_H
#define CREDITS_H
#include <iostream>
using namespace std;

 class Credits{
    public:
        Credits();
        Credits(int pVal);
        Credits(int pMin, int pMax);
        int min;
        int max;
};
#endif