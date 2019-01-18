//WordSearch.cpp
//Answer to Chapter 2 exercise 4
//Thinking in C++ Bruce Eckels
//This program searches Shake-speare's Sonnets
//for a keyword provided by the user and reports
//how many times it is found.
#include <string>
#include <iostream>
#include <fstream>


using namespace std;

int main() {
  string  wordsearch, wordkey;
  cout << "Enter a word for search: ";
  cin >> wordkey;

  ifstream in("sonnets.txt"); //input file

  int wordcount = 0;
  
  while(in >> wordsearch){
    if (wordkey == wordsearch)
    ++wordcount;
  }
  
  cout << "The word " << wordkey << " shows up " << wordcount << " times"<< endl;

  return 0;
}
