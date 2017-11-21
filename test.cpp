#include <iostream>
#include <string>

using namespace std;

struct Card{
    string last;
    string first;
    string phoneNumber;
};

struct Node{
    Card card;
    Node* next;
};
typedef Node* NodePtr;
//Creates a node to later be added
//Pre: none
//Post: node of type Card has been created
NodePtr CreateNode();

void FillInfo(NodePtr&);

//Adds a node to the linked list
//Pre: Node has been created
//Post: Node is added to linked list(possibly sorted prior)
void AddNode(NodePtr&, NodePtr);

NodePtr SearchNode(NodePtr&, string);

//Deletes a node from the list
//Pre: Node exists to be deleted
//Post: Node is removed from the list and deleted
void DeleteNode(NodePtr, string);

//Sorts the nodes into alphabetical order by last name
//Pre: Linked list exists and is accessible
//Post: Nodes are sorted into alphabetical order by last name
void SortNode();

//Prints the linked list
//Pre: valid nodeptr
void PrintList(NodePtr);

//Save data to file
//Pre: valid nodeptr
void LoadFile(ifstream&, NodePtr&);

//Saves data to file
//Pre: valid nodeptr
void SaveFile(ofstream&, NodePtr);

//Deletes entire list
//Pre: valid nodeptr
void DeleteList(NodePtr&);

int main(){

    return 0;
}

