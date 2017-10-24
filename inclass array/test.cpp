#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int MAXrow = 10;
const int MAXcol = 10;

void InitArray(int table[MAXrow][MAXcol]);

void PrintArray(int table[MAXrow][MAXcol]);

int main()
{
    int table[MAXrow][MAXcol];
    InitArray(table);
    PrintArray(table);
}

void InitArray(int table[MAXrow][MAXcol]){

    srand(time(nullptr));
    for (int i = 0; i < MAXrow; i++){
        for (int j = 0; j < MAXcol; j++){
            table [i] [j] = rand() % 100;
        }
    }


}

void PrintArray(int table[MAXrow][MAXcol]){
    for(int i = 0; i < MAXrow; i++){
        for (int j = 0; j < MAXcol; j++){
            cout << setw(3) << table[i] [j] << " ";
        }
        cout << endl;
    }
}
