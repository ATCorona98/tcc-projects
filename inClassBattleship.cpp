//Adam Pieroni
//11/2

#include <iostream>
#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <cstdlib>

using namespace std;

//5 ships
//carrier 5
//battleship 4
//cruiser 3
//sub 3
//destroyer 2
//
//~ = ocean
//# = part of ship
//H = hit
//. = miss
//
//Randomize the location of ships
//board size is 10x10
//prompt user for hit location

const int MAX_ROW = 10;
const int MAX_COL = 10;
const int MAX_SHIPS = 5;
const int MAX_SIZE = 5;


typedef char BoardArray[MAX_ROW][MAX_COL];

enum Orientation {Vertical, Horizontal, none};


struct PositionType
{
    int row;
    int col;
};

struct Ship
{
    int size;
    bool status[MAX_SIZE];
    PositionType position;
    Orientation orientation;
};
//Pre:  BoardArray, and row and column integers
//Post:  Create an array for the board consisting of ocean ('~')
void InitializeBoard(BoardArray board, int rows, int cols);

//Pre:  Initialized BoardArray
//Post:  Print the array from previous function.
void PrintBoard(BoardArray board, int rows, int cols);

//Pre: Initialized board and correctly assigned ocean
//Post:  Places enemy ships randomly across board
void PlaceShips(BoardArray board, Ship &ship);

//ValidPlacement();
//GuessPlacement();
//CheckShip();





char StoreBoard[MAX_ROW][MAX_COL];

Ship shipArray[MAX_SHIPS];


//enum Column={A=1..J=10}
//enum Row={One=1..Ten=10}
//enum Ships={ carrier, battleship,..}

int rows =10;
int cols =10;


int main(){
BoardArray board;

Ship ship;

InitializeBoard(board, rows, cols);
PrintBoard(board, rows, cols);
    for (int i = 0; i < MAX_SHIPS; i++);
        PlaceShips(board, ship);

}

//Pre:  row, col, smaller than board size
void InitializeBoard(BoardArray board, int rows, int cols){

cout << "Initializing!" << endl;

for (int i = 0; i < rows; i++)
    for (int j = 0; j < cols; j++)
        board[i][j] = '~';





}
void PrintBoard(BoardArray board, int rows, int cols){
for (int i = 0; i < rows; i++)
    {
        for ( int j = 0; j < cols; j++)
            cout << setw(3)  << board[i][j] << " ";

        cout << endl;
    }
cout << "Printing!" << endl;
}


void PlaceShips(BoardArray board, Ship &ship){
PositionType pos;
Orientation prient;

//do{
    //generate random position
    //generate random orientation
    //assign values to ship

//  }
//    while(!ValidPlacement)

cout << "Placing Ships!" << endl;
}
//Generate random position


//ValidPlacement()
//GuessPlacement()
//CheckShip()


