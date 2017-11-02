const int MAX_ROWS = 10;
const int MAX_COLS = 10;
const int MAX_SHIPSIZE = 5;
const int MAX_SHIPS = 5;

typedef char BoardArray[MAX_ROWS][MAX_COLS];

enum Orientation {Vertical, Horizontal, None};

struct PositionType
{
    int row;
    int col;
};

struct Ship
{
    int size;
    bool status[MAX_SHIPSIZE];
    PositionType position;
    Orientation orientation;
};

//Initializes the array with ~ for ocean.
//Pre: MAX_ROWS and MAX_COLS must have values and BoardArray must be a typedef
//Post: The BoardArray array will have ~ in all places.
void InitializeBoard(BoardArray, int, int);

//Displays the board to the screen.
//Pre: Variables rowsUsed and colsUsed must have a value
//Post: BoardArray array will be displayed to the screen.
void DisplayBoard(const BoardArray, int rowsUsed, int colsUsed);

void InitializeShips(Ship[]);

void InitializeShip(Ship&);

//Places a specified ship into a specified position in a specified orientation
//Pre:
//Post: A ship is placed into the position specified by the user
void PlaceShip(BoardArray, Ship&);

// For a given board, ship, and position, tests to see if the given position is valid for
// that particular ship, on that particular board
// Pre: board, ship, and position must be initialized with valid values for their types
// Post: Returns true if the given ship has no conflicts at that specified position,
//       otherwise returns false.
bool IsValid(BoardArray board, Ship ship, PositionType pos);
