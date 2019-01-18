//FillVectorConcat.cpp
//From exercises Chapter 2
//Thinking in C++
//By Bruce Eckels
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
  vector<string> v;
  ifstream in("FillVectorConcat.cpp");
  string line;
  string file;
  while(getline(in, line))
    v.push_back(line); // Add the line to the end

  for(int i = 0; i < v.size(); i++)
    file = file + v[i] + "\n";
    cout << file << endl;
} ///:~