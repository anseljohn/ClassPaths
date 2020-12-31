#include "../headers/Requirements.h"
#include <vector>

Requirements::Requirements() {
        this->bypassWithInstructorConsent = false;
}

Requirements::Requirements(vector<Requirement> requirements, bool bypassWithInstructorConsent) {
        this->requirements = requirements;
        this->bypassWithInstructorConsent = bypassWithInstructorConsent;
}

void Requirements::add(Requirement req) {
        requirements.push_back(req);
}