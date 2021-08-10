#include <iostream>
#include "../headers/ClassName.h"
using namespace std;

ClassName::ClassName() {
    this->subject = "N/A";
    this->number = "N/A";
    this->title = "N/A";
}

ClassName::ClassName(string subject, string number, string title) {
    this->subject = subject;
    this->number = number;
    this->title = title;
}

ClassName::ClassName(string subject, string number) {
    this->subject = subject;
    this->number = number;
    this->title = "";
}

string ClassName::get() {
    string out = "";
    out += subject + " ";
    out += number;
    if (!title.empty()) {
        out += ": " + title;
    }
    return out;
}