#include <iostream>
#include "../headers/ClassName.h"
using namespace std;

ClassName::ClassName(string subject, int number, string title) {
    this->subject = subject;
    this->number = number;
    this->title = title;
}

ClassName::ClassName(string subject, int number) {
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
}