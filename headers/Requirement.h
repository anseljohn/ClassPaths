#ifndef REQUIREMENT_H
#define REQUIREMENT_H
#include <vector>
#include "../classes/ClassName.cpp"

class Requirement {
    public:
        Requirement(ClassName className, bool canBeConcurrent, vector<ClassName> substitutes);
        ClassName className;
        bool canBeConcurrent;
        vector<ClassName> substitutes;

    private:

};

#endif