#include "../headers/Requirements.h"
#include <vector>

        vector<Requirement> requirements;
        bool bypassWithInstructorConsent;

        void add(Requirement req);
        void add(Requirement reqs[]);

Requirements::Requirements(vector<Requirement> requirements, bool bypassWithInstructorConsent) {
        this->requirements = requirements;
        this->bypassWithInstructorConsent = bypassWithInstructorConsent;
}