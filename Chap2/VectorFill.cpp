//VectorFill.cpp
//Answer to Chapter 2 Exercise 8
//Thinking in C++
//by Bruce Eckels
//Fill and display a Vector

#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<float> v;

  for ( int i = 0; i < 25; i++)
    v.push_back( i + (rand() / (float)RAND_MAX * 10) + 1);

  for (int index = 0; index < v.size(); index++)
    cout << "Vector Index:[" << index <<  "]  Value:  " << v[index] <<endl;

return 0;

}