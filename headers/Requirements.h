#ifndef REQUIREMENTS_H
#define REQUIREMENTS_H
#include <vector>
#include <tuple>
#include "Class.h"
class Requirements {
    public:
        Requirements(vector<tuple<string, string>> pClassIdentifiers);
        vector<tuple<string, string>> classIdentifiers;
    
    private:
};
#endif