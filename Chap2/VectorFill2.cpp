//VectorFill2.cpp
//Answer to Chapter 2 Exercise 9
//Thinking in C++
//by Bruce Eckels
//Fill and display two vectors and add together into a third

#include <iostream>
#include <vector>
using namespace std;

int main() {

  int vsize = 20;

  vector<float> v1;
  vector<float> v2;
  vector<float> v3;


  for ( int i = 0; i < vsize; i++) {
    v1.push_back( i + (rand() % 100 +1));
    v2.push_back( i + (rand() % 100 +1));
  }

  for ( int i = 0; i < vsize; i++)
    v3.push_back (v1[i] + v2[i]);


  
    cout << "Vector1\t  Vector2 Vector3" <<endl;

    for (int i = 0; i < vsize; i++)
    cout << v1[i] << "\t  " << v2[i] << "\t " << v3[i] << endl;

return 0;

}