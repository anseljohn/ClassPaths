#ifndef REQUIREMENTS_H
#define REQUIREMENTS_H
#include <vector>
#include "../classes/Requirement.cpp"

class Requirements {
    public:
        Requirements(vector<Requirement> requirements, bool bypassWithInstructorConsent);
        Requirements(Requirements requirements[], bool bypassWithInstructorConsent);
        vector<Requirement> requirements;
        bool bypassWithInstructorConsent;

        void add(Requirement req);

    private:

};

#endif