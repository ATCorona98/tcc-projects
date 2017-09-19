#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//Retrieves the information of the file the user wishes to use
//Pre: fstream must be included
//Post: inData is opened successfully and the istream is flowing
void GetFileInfo(ifstream& inData);

//Retrieves input from the file that has been opened
//Pre: GetFileInfo has completed successfully, and input stream is open.
//Post: Data has been recorded into the string
void InputFile(ifstream& inData, string data);

//Checks to see whether data is a palindrome
//Pre: Data is a valid string
//Post: Data is considered a palindrome or not.
void CheckPalindrome(string data);

int main(){
    ifstream inData;
    string data;

    GetFileInfo(inData);
    InputFile(inData, data);
    CheckPalindrome(data);
    return 0;

}



/* Pseudocode:

Must obtain file name from user.
    Include fstream
    Ask user for file name
    If valid, open file, if not, ask user again.
    When file is open the first function is complete

Must get lines for data.
    File must be opened successfully.
    Data must be read from the file.
        Getline must be used
    When data has successfully been read function 2 is complete.

Must determine whether that data is a palindrome.
    Data must have a value.
    Declare dummy variable.
    Store the reverse of data into the dummy variable.
    Compare dummy variable to the data variable.
*/
