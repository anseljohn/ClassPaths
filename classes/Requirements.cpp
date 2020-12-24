#include <iostream>
#include "../headers/Requirements.h"
using namespace std;

Requirements::Requirements(vector<tuple<string, string>> pClassIdentifiers) {
    classIdentifiers = pClassIdentifiers;
}