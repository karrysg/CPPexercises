/**Loop.cpp 
Write a program that uses a while loop to read words from
standard input (cin) into a string. This is an "infinite" while loop,
which you break out of (and exit the program) using a break statement.
For each word that is read, evaluate it by first using a sequence of if
statements to "map" an integral value to the word, and then use a switch
statement that uses that integral value as its selector (this sequence of
events is not meant to be good programming style; it’s just supposed to
give you exercise with control flow). Inside each case, print something
meaningful. You must decide what the "interesting" words are and what the
meaning is. You must also decide what word will signal the end of the program.

Solution to Chapter 3 Problem 3
Thinking in C++
By Bruce Eckels**/

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main() {

string word;
cin >> word;
    while ( word == "exit"){
        break;
    }
    
}
