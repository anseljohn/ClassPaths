#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
  ifstream classesIn;
  classesIn.open("classes.txt");

  string line;
  if (classesIn.is_open()) {
    while (getline(classesIn, line)) {
      cout << line << endl;
    }
  } else {
    cout << "Unable to open file.\n";
  }


  return 1;
}
