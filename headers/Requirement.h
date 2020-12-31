#include <vector>
#include "../classes/ClassName.cpp"
#ifndef REQUIREMENT_H
#define REQUIREMENT_H

class Requirement {
    public:
        Requirement(ClassName className, bool canBeConcurrent, vector<ClassName> substitutes);
        ClassName className;
        bool canBeConcurrent;
        vector<ClassName> substitutes;

    private:

};

#endif