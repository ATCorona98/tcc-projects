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





int main (){

    int RandNum[MAX_ROWS][MAX_COLS];




InitArray(RandNum);

PrintArray(RandNum);




}

void InitArray (int RandNum[MAX_ROWS][MAX_COLS]){





srand(time(nullptr));


for (int column = 0; column < MAX_COLS; column++){

	for (int row = 0; row < MAX_ROWS; row++)
        RandNum[row][column] = rand() % 100 + 1;

                                                }

}

void PrintArray (int RandNum[MAX_ROWS][MAX_COLS]){



for (int row = 0; row < MAX_ROWS; row++)
    {
        for (int column = 0; column < MAX_COLS; column++)
            cout << setw(3)  << RandNum[row][column] << " ";

        cout << endl;
    }

}


