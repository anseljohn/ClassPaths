#ifndef REQUIREMENTS_H
#define REQUIREMENTS_H
#include <vector>
#include <tuple>
#include "Class.h"
class Requirement {
    public:
        Requirement(vector<tuple<string, bool>> pNums);
        vector<tuple<tuple<string, bool>, string>> classIdentifiers;
    private:
};
#endif