#include <iostream>
#include <iomanip>
#include <ctime>
#include "battleship(In-Class).h"

using namespace std;

int main(){
    BoardArray board;
    Ship ships [MAX_SHIPS];
    PositionType pos;
    Orientation orientation;

    InitializeBoard(board, MAX_ROWS, MAX_COLS);
    DisplayBoard(board, MAX_ROWS, MAX_COLS);
    PlaceShip(board, ships[MAX_SHIPS]);
    for (int i = 0; i < MAX_SHIPS; i++){
        PlaceShip(board, ships[i]);
    }
    IsValid(board, ships[MAX_SHIPS], pos);
    return 0;
}

//Initializes the array with ~ for ocean.
//Pre: MAX_ROWS and MAX_COLS must have values that are less than or equal to
// what is declared in the BoardArray array and BoardArray must be a typedef
//Post: The BoardArray array will have ~ in all places.
void InitializeBoard(BoardArray board, int row, int col){
    cout << "InitializeBoard!" << endl;
//    for (int i = 0; i < row; i++){
//        for (int j = 0; j < col; j++){
//            board[i][j] = '~';
//        }
//    }
    cout << "InitializeBoard done!" << endl;
}

//Displays the board to the screen.
//Pre: Variables rowsUsed and colsUsed must have a value. BoardArray must be filled.
//Post: BoardArray array will be displayed to the screen.
void DisplayBoard(const BoardArray board, int rowsUsed, int colsUsed){
    cout << "DisplayBoard!" << endl;
//    for (int i = 0; i < rowsUsed; i++){
//        for (int j = 0; j < colsUsed; j++){
//                cout << setw(2) << board [i][j];
//        }
//        cout << endl;
//    }
    cout << "DisplayBoard done!" << endl;
}


//Places a ship randomly
//Pre:
//Post: A ship is placed into the position specified by the user
void PlaceShip(BoardArray board, Ship& ship){
    cout << "PlaceShip!" << endl;
    PositionType pos;
    Orientation orient;
    //do Generate random position
        //Generate random orientation
        //assign values to ship
    // while !IsValid(board, Ship position, Ship orientation)
        //if it returns true, continue
        //if it returns false, ask for other input.
    cout << "PlaceShip done!" << endl;
}

// For a given board, ship, and position, tests to see if the given position is valid for
// that particular ship, on that particular board
// Pre: board, ship, and position must be initialized with valid values for their types
// Post: Returns true if the given ship has no conflicts at that specified position,
//       otherwise returns false.
bool IsValid(BoardArray board, Ship ship, PositionType pos){
    cout << "IsValid!" << endl;

    cout << "IsValid done!" << endl;
}
