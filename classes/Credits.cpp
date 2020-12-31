#include <iostream>
#include "../headers/Credits.h"
using namespace std;

Credits::Credits() {
    min = 0;
    max = 0;
}

Credits::Credits(int pVal) {
    min = pVal;
    max = pVal;
}

Credits::Credits(int pMin, int pMax) {
    min = pMin;
    max = pMax;
}