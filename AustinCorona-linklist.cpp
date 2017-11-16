#include <iostream>
#include <cstddef>

using namespace std;

struct NodeType
{
    int component;
    NodeType *link;
};

void PrintFunction(NodeType *head, NodeType *currPtr);

//Create a new NodeType and return a pointer to it
//Pre: none
//Post: Allocates node space and returns address to it
NodeType *CreateNode(NodeType *newNodePtr);

//Adds a node to a specific sorted position in the linked list
//Pre: head and newNodePtr must point to valid nodes
//Post: newNodePtr added to proper location of lis, head updated if needed
void AddNode(NodeType*& head, NodeType*& newNodePtr);

//Taskes a pointer to a linked list and a value. Delete the node
//containing that value if it exists
//Pre:head points at a valid node(can be null), num contains an integer
//Post: If num exists, that node is removed from the list. If num does not exist,
//      return error message.
void DeleteNode(NodeType*& head, int num);

int main()
{
    NodeType *lastPtr; //Points to last node in list
    NodeType *head; //Points to first node in list
    NodeType *currPtr; //Points to current pointer
    NodeType *newNodePtr; //Points to new node being added.

    // 1) Create a new node, assign the value 200 to the component,
    //       set listPtr to point to the node, also set currPtr and lastPtr to
    //       point to the node. Set link to nullptr
    newNodePtr = new NodeType;
    newNodePtr->component= 200;
    head = currPtr = lastPtr = newNodePtr;
    newNodePtr->link = nullptr;
    PrintFunction(head, currPtr);
    // 2) Create a new node with component value 300. Add this element to
    //       the end of the list. (i.e., Set link of node from Step 1 to point to
    //       this node.) What else do you need to set?
    newNodePtr = new NodeType;
    newNodePtr->component= 300;
    newNodePtr->link = nullptr;
    lastPtr->link = newNodePtr;
    lastPtr = newNodePtr;
    PrintFunction(head, currPtr);
    // 3) Using listPtr, print out the component value of both nodes
    //cout << head->component << " " << head->link->component << endl;
    // 4) Using currPtr, print out the component value of the first node
    //cout << currPtr->component << endl;
    // 5) Advance currPtr to point to the second node and print out the component
    currPtr = currPtr->link;
    //cout << currPtr->component << endl;
    // 6) Create a new node with component value 400 and add it to the
    //       end of the list.
    newNodePtr = new NodeType;
    newNodePtr->component = 400;
    newNodePtr->link = nullptr;
    lastPtr->link = newNodePtr;
    lastPtr = newNodePtr;
    PrintFunction(head, currPtr);
    // 7) Create a new node with component value 100 and add it to the
    //       front of the list.
    newNodePtr = new NodeType;
    newNodePtr->component = 100;
    newNodePtr->link = head;
    head = newNodePtr;
    PrintFunction(head, currPtr);
    // 8) Write a loop that will use currPtr to traverse through the list and
    //       print out each component
//    currPtr = head;
//    while(currPtr != nullptr){
//        cout << currPtr->component << endl;
//        currPtr = currPtr->link;
//    }
    // 9) Move your loop from the last step into a function.
    PrintFunction(head, currPtr);
    // 10) Use your function to print out the list after adding each node in
    //        the steps above (should see list changing)

    ///done

    return 0;
}
void PrintFunction(NodeType* head, NodeType* currPtr){
    currPtr = head;
    while(currPtr != nullptr){
        cout << currPtr->component << endl;
        currPtr = currPtr->link;
    }
}

NodeType *CreateNode(NodeType* newNodePtr){
    //newNodePtr = new NodeType;
    //node->next = nullptr;
    //return newNodePtr;
}

void AddNode(NodeType*& head, NodeType*& newNodePtr){
    //local NodeType *currPtr = head;
    //local NodeType *prevPtr;

    //if head == null

        //head = newNodePtr

    //Find proper location in list

    //while loop newNodePtr->component > currPtr->component
        //prevPtr = currPtr;
        //currPtr = currPtr->link;

    //Truly add to the list
}

void DeleteNode(NodeType*& currPtr){

}
