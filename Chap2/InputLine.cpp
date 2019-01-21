//InputLine.cpp
//Answer to Chapter 2 Exercise 7
//Thinking in C++
//by Bruce Eckels
//Display a file on line at at time waiting for the user
//to hit return key to move to next line

#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream in("InputLine.cpp");
  string line;

  while ( getline(in, line) ) {
    cout << line;
    cin.get();
  }

  return 0;
}
