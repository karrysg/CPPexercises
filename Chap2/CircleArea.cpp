//CircleArea.cpp
//Find the area of a circle given the radius
#include<iostream>
using namespace std;

int main()
{
  /* code */
  double pi = 3.1416;

  double radius;
  string units = " ";
  cout << "Enter the radius of the circle: ";
  cin >> radius;
  cout << "Enter the units: ";
  cin >> units;
  cout << "The area of the circle is " << radius * radius * pi << " square " << units<< endl;
  

}
