//Prime.cpp
//Solution to Chapter 3 Proplem 2
//Thinking in C++
//By Bruce Eckels
#include <iostream>
//#include <cmath>
using namespace std;

int main() {

  const int upper = 100;
  int counter;

  
    for (int prime = 1; prime < upper; prime++) {

      counter = 0;

        for (int j = 1; j <= prime ; j++)
          if (prime % j == 0) 
                ++counter;

        if (2 == counter)
            cout << prime << " ";

          

        }   

  
  return 0;
}