#include <iostream>
#include <cstddef>

using namespace std;

struct NodeType;
typedef NodeType* NodePtr;

struct NodeType
{
    int component;
    NodePtr next;
};

void PrintList(NodePtr);
void CreateList(NodePtr&);
void AddItem(NodePtr&,int);
void InsertNode(NodePtr&, NodePtr);
bool DeleteItem(NodePtr&, int);

int main()
{
    NodePtr head = nullptr;
    NodePtr newNodePtr;
    int num;

    head = new NodeType;
    head->component = 5;

    newNodePtr = new NodeType;
    newNodePtr->component = 7;

    head->next = newNodePtr;
    newNodePtr->next = NULL;

    PrintList(head);

    do {
        cout << "Enter a value to add (0 to end): ";
        cin >> num;

        if (num != 0)
            AddItem(head, num);

    } while (num != 0);

    PrintList(head);

    do {
        cout << "Enter a value to remove (0 to end): ";
        cin >> num;

        if (num != 0){
            if (!DeleteItem(head, num))
                cout << "Value " << num << " not found!" << endl;
            PrintList(head);
        }

    } while (num != 0);

    return 0;
}

// Print a given linked list
void PrintList(NodePtr np)
// Pre: np must be a valid pointer (can be NULL)
// Post: Print components of list on a single line (as width allows)
{
    NodePtr currPtr = np;

    while (currPtr != NULL)
    {
        cout << currPtr->component << " ";
        currPtr = currPtr->next;
    }

    cout << endl;
}

// Add an item to an existing linked list
void AddItem(NodePtr& head, int num)
// Pre: head is a valid pointer
// Post: Linked list is updated with a node containing num as the last element
{
    NodePtr currPtr;
    currPtr = head;

    NodePtr np = new NodeType;  // Create new node
    np->component = num;        // Set component to given value
    np->next = NULL;            // Going to be last element in list

    // Advance to last element
    // Question: How could this be updated to create a sorted list?
    while (currPtr->next != NULL)
    {
        currPtr = currPtr->next;
    }

    if (currPtr != head)    // This is not the first element in the list. Add to end of list
    {
        currPtr->next = np;
    }
    else                    // This is the first element added to the list
    {
        head = np;
        np->next = NULL;
    }
}

// Add a given node to the beginning of the list
void InsertNode(NodePtr& head, NodePtr np)
// Pre: np must be point to a valid node
// Post: Linked list is updated with np as first element.
{

    if (head != NULL)       // Already elements in list
    {
        np->next = head;    // Insert np at front and update head
        head = np;
    }
    else                    // No current list
    {
        head->next = np;    // Update head to np
        np->next = NULL;
    }
}

// Add a given number to the given linked list
bool DeleteItem(NodePtr& head, int num)
// Pre: head points to a valid linked list and num is a valid integer
// Post: If num is found in an element in the list it is removed from the list and true
//       is returned. If necessary (num is in the first element) head is updated.
//       If num is not found, return false.
{
    NodePtr currPtr = head; // Keep track of current node
    NodePtr prevPtr = NULL; // Trailing node

    // Loop until end of list or the desired value is found
    // ** Does it matter which order these tests go in?
    while ((currPtr != NULL) && (currPtr->component != num))
    {
        prevPtr = currPtr;
        currPtr = currPtr->next;
    }

    // Value has been found
    if (currPtr != NULL)
    {
        if (currPtr == head)            // Value is in the first node
        {
            head = currPtr->next;       // Point head to node following
        }
        else                            // Value is not in first node
        {
            prevPtr->next = currPtr->next;  // Point previous node's next to skip current node
        }

        delete currPtr; // Current node has been removed from list, so recover memory

        return true;    // Successful deletion
    }
    else
        return false;   // Item not found. No deletion.
}
