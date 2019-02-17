//function1.cpp 
//Definitions of functions in function.h
//Solution to question one Chapter 3
//Thinking in CPP by Bruce Eckels
#include<iostream>
using namespace std;

void x(int b) {
  cout << "return int " << b << endl;
}

char y(void) {
  cout << "return void " << &y << endl;
  return 0;
}

int z(float c) {
  cout << "return float " << &z << endl;
  return 1;
}

float a(int d) {
  cout << "return int " << &a << endl;
  return 2;
}