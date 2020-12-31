#include <iostream>
#ifndef CLASSNAME_H
#define CLASSNAME_H
using namespace std;

class ClassName {
    public:
        ClassName();
        ClassName(string subject, string number, string title);
        ClassName(string subject, string number);
        string subject;
        string number;
        string title;
        
        string get();

    private:
};

#endif