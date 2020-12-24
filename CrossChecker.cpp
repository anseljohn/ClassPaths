#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "classes/Class.cpp"
#include "classes/CreditRange.cpp"
using namespace std;

void createClass(string classStr, vector<Class>& classes);
int main() {
  ifstream classesIn;
  classesIn.open("classes.txt");

  string line;
  if (classesIn.is_open()) {
    vector<Class> classes;

    string cls = "";
    while (getline(classesIn, line)) {
      if (line.find("Unit") != string::npos) {
        cls += line;
        createClass(cls, classes);
        cls = "";
      } else {
        if (!line.empty()) {
          cls += line + "\n";
        }
      }
    }
  } else {
    cout << "Unable to open file.\n";
  }

  return 1;
}

void createClass(string classStr, vector<Class>& classes) {
  string subj;
  string num;
  string title = "";
  string desc = "";
  vector<string> reqs;
  CreditRange credits;

  bool start = true;
  stringstream strm(classStr);
  string line = "";
  while (getline(strm, line)) {
    if (start) {
      int firstSpc = line.find(' ');
      int colon = line.find(':');
      subj = line.substr(0, firstSpc);
      num = line.substr(firstSpc + 1, colon - 5);
      title = line.substr(colon + 2, line.size() - 1);

      cout << subj << " " << num << ": " << title << endl;
      start = false;
    } else {
      if (line.find("Unit") == string::npos) {
        if (line.find("prereq") == string::npos) {
          desc += line;
        } else {
          
        }
      } else {
        
      }
    }
  }

  // classes.push_back(Class(subj, num, title, desc, reqs, credits));
}