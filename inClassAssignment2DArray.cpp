#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <cstdlib>

using namespace std;

const int MAX_ROWS = 10;
const int  MAX_COLS = 10;

void InitArray (int RandNum[MAX_ROWS][MAX_COLS]);

void PrintArray (int RandNum[MAX_ROWS][MAX_COLS]);

bool FindNumber (int RandNum[MAX_ROWS][MAX_COLS], int &row, int &col);

void GuessNumber(int row, int col);



int main (){

    int RandNum[MAX_ROWS][MAX_COLS];

    int col = 0;
    int row = 0;



InitArray(RandNum);

PrintArray(RandNum);



FindNumber(RandNum, row, col);

GuessNumber(row, col);

}

void InitArray (int RandNum[MAX_ROWS][MAX_COLS]){





srand(time(nullptr));


for (int col = 0; col < MAX_COLS; col++){

	for (int row = 0; row < MAX_ROWS; row++)
        RandNum[row][col] = rand() % 100 + 1;

                                                }

}

void PrintArray (int RandNum[MAX_ROWS][MAX_COLS]){



for (int row = 0; row < MAX_ROWS; row++)
    {
        for ( int col = 0; col < MAX_COLS; col++)
            cout << setw(3)  << RandNum[row][col] << " ";

        cout << endl;
    }

}
bool FindNumber(int RandNum[MAX_ROWS][MAX_COLS], int &row, int &col){
int guess;

cout << "Guess a number between 1 and 100:  " << endl;
    cin >> guess;

for (col = 0; col < MAX_COLS; col++){

	for (row = 0; row < MAX_ROWS; row++)
        if (RandNum[row][col] == guess)
            return true;





}
return false;
}
void GuessNumber(int row, int col){

int locationx;
int locationy;
int foundx;
int foundy;



cout << "Guess it's location (x, y):  " << endl;


if(RandNum[row][col] == guess){
//            cout << "Found!" << endl;
           foundx = row + 1;
           foundy = col + 1;
            cout << foundx <<" " <<  foundy << endl;
            if (locationx > foundx)
                cout << "Too high!" << endl;
                else if (locationx < foundx)
                    cout << "Too low!" << endl;
                    else
                        cout << "Correct!" << endl;

            if ( locationy > foundy)
                cout << "Too low!" << endl;
                else if (locationy < foundy)\
                    cout << "Too Low!" << endl;
                    else
                        cout << "Correct!" << endl;

}

}
