#include <iostream>
#include <tuple> 
#include "../headers/Requirement.h"
using namespace std;

Requirement::Requirement(vector<string, bool> pNums) {
    for (int i = 0; i < pNums.size(); i++) {
        string curr = pNums.at(i);
        string currSubj = curr.substr(0, curr.find(" "));
        classIdentifiers.push_back(tuple<string, string> (curr, currSubj));
    }
}