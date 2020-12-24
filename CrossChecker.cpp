#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "classes/Class.cpp"
using namespace std;

int main() {
  ifstream classesIn;
  classesIn.open("classes.txt");

  string line;
  if (classesIn.is_open()) {
    bool newClass = true;
    string cls = "";
    while (getline(classesIn, line)) {
      if (line.find("Unit") != string::npos) {
        cls += line;
      } else {
        cls += line + "\n";
      }

      stringstream strm(cls);
      while (getline(strm, line)) {
      }
      cout << cls;
      cls = "";
    }
  } else {
    cout << "Unable to open file.\n";
  }

  return 1;
}

void parse(string line, vector<string>& parsed) {
  string temp = "";

  for (int i = 0; i < line.size(); i++) {
    if (line.at(i) == ':') {
      continue;
    } else if (line.at(i) == ' ') {
      parsed.push_back(temp);
      temp = "";
    } else if (i == line.size() - 1) {
      temp += line.at(i);
      parsed.push_back(temp);
    } else {
      temp += line.at(i);
    }
  }
}