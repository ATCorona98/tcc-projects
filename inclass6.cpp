// Program Convert converts a temperature from Fahrenheit to
// Celsius or a temperature from Celsius to Fahrenheit
// depending on whether the user enters an F or a C.

#include <iostream>
using namespace std;

int ConvertedTemp(int tempIn, char letter);
// If letter is a 'C,' tempIn is converted from Celsius
// to Fahrenheit; otherwise tempIn is converted from
// Fahrenheit to Celsius.

char Menu(char letter);

int main ()
{
    char letter;		// Place to store input letter
    int tempIn;		// Temperature to be converted

    letter = Menu(letter);

    while (letter != 'Q' && letter != 'q'){
        while (!isalpha(letter)){
            cout << "Please enter a letter." << endl;
            cin >> letter;
        }
        cout << " Type an integer number, and press return."
           << endl;
        cin >> tempIn;
        switch(letter){
            case 'f' : cout << "Fahrenheit to Celsius" << endl;
                cout << "Temperature to convert: " << tempIn  << endl;
                cout << "Converted temperature:  "
                << ConvertedTemp(tempIn, letter) << endl << endl;
                break;
            case 'F' : cout << "Fahrenheit to Celsius" << endl;
                cout << "Temperature to convert: " << tempIn  << endl;
                cout << "Converted temperature:  "
                << ConvertedTemp(tempIn, letter) << endl << endl;
                break;
            case 'C' : cout << "Celsius to Fahrenheit" << endl;
              cout << "Temperature to convert: " << tempIn  << endl;
              cout << "Converted temperature:  "
              << ConvertedTemp(tempIn, letter) << endl << endl;
              break;
            case 'c' : cout << "Celsius to Fahrenheit" << endl;
              cout << "Temperature to convert: " << tempIn  << endl;
              cout << "Converted temperature:  "
              << ConvertedTemp(tempIn, letter) << endl << endl;
              break;
            case 'Q' : return 0;
            case 'q' : return 0;
            default : cout << "That is not a specified character, please try again" << endl;
        }
        cout << "Type a C, F,  or Q; then press return."  << endl;
        cin  >> letter;


      }
//    cout << " Type an integer number, and press return."
//            << endl;
//    cin >> tempIn;
//    if (letter == 'F'){
//        cout << "Fahrenheit to Celsius" << endl;
//    }
//    else{
//        cout << "Celsius to Fahrenheit" << endl;
//    }
//    cout << "Temperature to convert: " << tempIn  << endl;
//    cout << "Converted temperature:  "
//        << ConvertedTemp(tempIn, letter) << endl << endl;
//    cout << "Type a C, F,  or Q; then press return."  << endl;
//
//    cin  >> letter;

    return 0;
}

// *****************************************************

int ConvertedTemp(int tempIn, char letter)
{
    if (letter == 'C')
        return (9 * tempIn / 5) + 32;
    else if (letter == 'c')
        return (9 * tempIn / 5) + 32;
    else
        return 5 * (tempIn - 32) / 9;
}
//Prompts user for selection and return the selected choice
//Pre: none
//Post: Returns character to main.
char Menu(char letter){
    cout << "Input Menu"  << endl  << endl;
    cout << "F:  Convert from Fahrenheit to Celsius" << endl;
    cout << "C:  Convert from Celsius to Fahrenheit" << endl;
    cout << "Q:  Quit" << endl;
    cout << "Type a C, F,  or Q; then press return." << endl;

    cin  >> letter;
    return letter;
}
