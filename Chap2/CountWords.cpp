//CountWords.cpp
//Answer to Chapter 2 exercise 3
//Thinking in C++ Bruce Eckels
#include <string>
#include <iostream>
#include <fstream>


using namespace std;

int main() {
  ifstream in("CountWords.cpp");
  string word;
  int wordcount = 0;
  while (getline(in, word))
  ++wordcount;
  
  cout << "The number of words is " << wordcount << endl;

  return 0;
}
