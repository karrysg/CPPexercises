//VectorFill3.cpp
//Answer to Chapter 2 Exercise 10
//Thinking in C++
//by Bruce Eckels
//Fill and display a Vector

#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<float> v;

//Fill Vector
  for ( int i = 0; i < 25; i++)
    v.push_back( i + (rand() % 100 +1));

cout << "Vector Value: " << endl;
  for (int i = 0; i < v.size(); i++)
    cout << "Vector Index:[" << i <<  "]  Value:  " << v[i] <<endl;

  for (int i = 0; i < v.size(); i++)
   v[i] = v[i] * v[i];

  cout << "VECTOR SQUARED: " << endl;
  for (int i = 0; i < v.size(); i++)
    cout << "Vector Index:[" << i <<  "]  Value:  " << v[i] <<endl;

return 0;

}