/* Adam Pieroni
   09/18/17
   CSC 201
   Palindrome
*/

using namespace std;

#include <iostream>
#include <string>
#include <fstream>

string butts = "hannah";
ifstream inFile;


void OpenFile(ifstream &inFile);

void ReadFile(ifstream &inFile);

void Palindrome(string butts);






int main(){

OpenFile(inFile);

ReadFile(inFile);

Palindrome(butts);

}



void OpenFile(ifstream &inFile){








}

void ReadFile(ifstream &inFile){







}

void Palindrome(string butts){





  for (string::reverse_iterator rit=butts.rbegin(); rit!=butts.rend(); ++rit)
    cout << *rit;






}


















