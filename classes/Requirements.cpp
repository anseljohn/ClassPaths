#include "../headers/Requirements.h"
#include <vector>

Requirements::Requirements(vector<Requirement> requirements, bool bypassWithInstructorConsent) {
        this->requirements = requirements;
        this->bypassWithInstructorConsent = bypassWithInstructorConsent;
}

void add(Requirement req) {
        requirements.push_back(req);
}