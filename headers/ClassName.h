#include <iostream>
#ifndef CLASSNAME_H
#define CLASSNAME_H
using namespace std;

class ClassName {
    public:
        ClassName(string subject, int number, string title);
        ClassName(string subject, int number);
        string subject;
        int number;
        string title;
        
        string get();

    private:
};

#endif