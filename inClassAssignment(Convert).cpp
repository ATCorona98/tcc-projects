// Program Convert converts a temperature from Fahrenheit to
// Celsius or a temperature from Celsius to Fahrenheit
// depending on whether the user enters an F or a C.

#include <iostream>
using namespace std;

//Accepts char into menu and determines which conversion to make.
//Pre:  prompt user for letter.  if letter equals Q or q it quits.
//Post:  Displays conversion based on inputed letter from user.
int Menu(char &letter);

int ConvertedTemp(int tempIn, char letter);
// If letter is a 'C,' tempIn is converted from Celsius
// to Fahrenheit; otherwise tempIn is converted from
// Fahrenheit to Celsius.

int main ()
{
  char letter;		// Place to store input letter
  int tempIn;		// Temperature to be converted

  Menu(letter);

  while (letter != 'Q' && letter != 'q')
  {
      while (!isalpha(letter)){
       cout << "That is not a corresponding letter!" << endl;
       cin >> letter;
      }
    cout << " Type an integer number, and press return."
         << endl;
    cin >> tempIn;

    if (letter == 'F' || letter == 'f')
      cout << "Fahrenheit to Celsius" << endl;
    if (letter == 'C' || letter == 'c')
        cout << "Celsius to Fahrenheit" << endl;


    cout << "Temperature to convert: " << tempIn  << endl;

    cout << "Converted temperature:  "

    << ConvertedTemp(tempIn, letter) << endl << endl;

    cout << "Type a C, F,  or Q; then press return."  << endl;

    cin  >> letter;

  }
  return 0;
}

// *****************************************************

int ConvertedTemp(int tempIn, char letter)
{
  if (letter == 'C')
    return (9 * tempIn / 5) + 32;
  else
    return 5 * (tempIn - 32) / 9;
}

int Menu(char &letter){



cout << "Input Menu"  << endl  << endl;
  cout << "F:  Convert from Fahrenheit to Celsius" << endl;
  cout << "C:  Convert from Celsius to Fahrenheit" << endl;
  cout << "Q:  Quit" << endl;
  cout << "Type a C, F,  or Q; then press return." << endl;

  cin  >> letter;

return letter;





}
