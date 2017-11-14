#include <iostream>
#include <cstddef>

using namespace std;

struct NodeType
{
    int component;
    NodeType *link;
};

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

    // 2) Create a new node with component value 300. Add this element to
    //       the end of the list. (i.e., Set link of node from Step 1 to point to
    //       this node.) What else do you need to set?
    newNodePtr = new NodeType;
    newNodePtr->component= 300;
    newNodePtr->link = nullptr;
    lastPtr->link = newNodePtr;
    lastPtr = newNodePtr;

    // 3) Using listPtr, print out the component value of both nodes
    cout << head->component << " " << head->link->component << endl;
    // 4) Using currPtr, print out the component value of the first node
    cout << currPtr->component << endl;
    // 5) Advance currPtr to point to the second node and print out the component
    currPtr = currPtr->link;
    cout << currPtr->component << endl;
    // 6) Create a new node with component value 400 and add it to the
    //       end of the list.
    newNodePtr = new NodeType;
    newNodePtr->component = 400;
    newNodePtr->link = nullptr;
    lastPtr->link = newNodePtr;
    lastPtr = newNodePtr;
    // 7) Create a new node with component value 100 and add it to the
    //       front of the list.
    newNodePtr = new NodeType;
    newNodePtr->component = 100;
    newNodePtr->link = head;
    head = newNodePtr;
    // 8) Write a loop that will use currPtr to traverse through the list and
    //       print out each component
    currPtr = head;
    while(currPtr != nullptr){
        cout << currPtr->component << endl;
        currPtr = currPtr->link;
    }
    // 9) Move your loop from the last step into a function.

    // 10) Use your function to print out the list after adding each node in
    //        the steps above (should see list changing)



    return 0;
}
