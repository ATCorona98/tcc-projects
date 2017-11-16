#include <iostream>

using namespace std;

struct NodeType
{
    int component;
    NodeType *link;
};


void PrintList(NodeType* head, NodeType* currPtr);

//Create a new NodeType and return a pointer to it
//Pre:: none
//Post:: allocates node space and returns address to
NodeType CreateNode (NodeType* &newNodePtr);
//Adds a new NodeType and return a pointer to it
//Pre:  head and newNodePtr must point to valid nodes (can be null)
//Post:  newNodePtr added to proper location in list, head updated if needed
void AddNode (NodeType* newNodePtr, NodeType* &head);

//Takes a pointer to a linked list and a value. Delete the node containing that value if it exists.
//Pre:  head is pointing at a valid node, num contains an integer.
//Post:  if num exists, that node is removed from the list.  If it does
//       not exist, return message.
void DeleteNode (NodeType* &head, int num);

int main()
{
    NodeType *lastPtr;
    NodeType *head;
    NodeType *currPtr;
    NodeType *newNodePtr;

////     1) Create a new node, assign the value 200 to the component,
////           set listPtr to point to the node, also set currPtr and lastPtr to
////           point to the node. Set link to nullptr
//    cout << "1)" << endl;
//    newNodePtr = new NodeType;
//    newNodePtr->component = 200;
//    head = currPtr = lastPtr = newNodePtr;
//    newNodePtr->link = nullptr;
//    // 2) Create a new node with component value 300. Add this element to
//    //       the end of the list. (i.e., Set link of node from Step 1 to point to
//    //       this node.) What else do you need to set?
//    cout << "2)" << endl;
//
//
//    // 3) Using listPtr, print out the component value of both nodes
//    cout << "3)" << endl;
//    cout << head->component << " " << head->link->component << endl;
//
//
//    // 4) Using currPtr, print out the component value of the first node
//    currPtr = head;
//    cout << "4)" << endl;
//    cout << currPtr->component<< endl;
//    // 5) Advance currPtr to point to the second node and print out the component
//    currPtr = currPtr->link;
//    cout << "5)" << endl;
//    cout << currPtr->component << endl;
//    // 6) Create a new node with component value 400 and add it to the
//    //       end of the list.
//    cout << "6)" << endl;
//    newNodePtr = new NodeType;
//    newNodePtr->component = 400;
//    newNodePtr->link = nullptr;
//    lastPtr->link = newNodePtr;
//    lastPtr = newNodePtr;
//    // 7) Create a new node with component value 100 and add it to the
//    //       front of the list.
//    newNodePtr = new NodeType;
//    newNodePtr->component = 100;
//
////     8) Write a loop that will use currPtr to traverse through the list and
////           print out each component
//    currPtr = head;
//    while (currPtr != nullptr){
//        cout << currPtr->component << endl;
//            currPtr = currPtr->link;
//    }
////     9) Move your loop from the last step into a function.
CreateNode(newNodePtr);
//

cout << newNodePtr->component;
//PrintList(head, currPtr);

    return 0;


}
    // 10) Use your function to print out the list after adding each node in
    //        the steps above

NodeType CreateNode(NodeType* &newNodePtr){
//create new nodetype, assign new nodetype, assign nodetype->link to nullptr
//Declare local variable
//
newNodePtr = new NodeType;
    newNodePtr->component = 300;
    newNodePtr->link = nullptr;


}

void AddNode(NodeType* newNodePtr, NodeType* &head){
//take newnodeptr run through entire list and compare.
// local nodeType *currPtr = head
//NodeType* prevPtr
// if newNodePtr == null
    //return;
// if (head == null (it's a new list)
       //head = newNodePtr
//find the proper location in the list
//while (newNodePtr->component > currPtr->component)
    //prevPtr = currPtr
    //currPtr = currPtr->next

NodeType* currPtr = head;
    while (currPtr != nullptr){
         if (newNodePtr->component > currPtr->component)

            currPtr = currPtr->link;
    }


//if (location == 'E'){
//    newNodePtr->link = nullptr;
//    lastPtr->link = newNodePtr;
//    lastPtr = newNodePtr;
//}
//if (location == 'B'){
//
//    newNodePtr->link = head;
//    head = newNodePtr;




}




void PrintList (NodeType* head, NodeType* currPtr){
cout << "9) & 10)" << endl;
 currPtr = head;
    while (currPtr != nullptr){
        cout << currPtr->component << endl;
            currPtr = currPtr->link;

    }
}
