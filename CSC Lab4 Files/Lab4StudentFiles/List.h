// List.h (Header specifications for Lab 4's implementation of a stack class)
// This is a group project.  You must implement all files in this specification
// for full credit.  Do not create class functions not listed in this specification.
// For example, you should modify Lab 3 functions such as insertFirst to be used as
// push, used in a typical stack implementation.  Others may be modified as necessary
// Optionally, implementation files not mentioned in this header may be eliminated.

#ifndef H_List
#define H_List
#include <iostream>
#include <cassert>

// definition of the linked list node used
template <class Type>
struct nodeType
{
	Type info;
	nodeType<Type> *link;
};

// class definition starts here
template <class Type>
class List
{
  public:
    List();                                             // default constructor
    List(const List<Type>& otherList);                  // copy constructor
    ~List();                                            // destructor

    const List<Type>& operator= (const List<Type> &);   // overload assignment operator.
    void initializeList();                              // list cleared to an empty state.
    bool isEmptyList() const;                           // determines if list is empty.
    int length() const;                                 // returns number of records in list.
    Type top() const;                                   // returns first element in list.
    void pop();                                         // deletes top element in the stack.
    void push(const Type& newItem);                     // inserts newItem in list beginning.

  private:
    int count;                                          // number of records in list
    nodeType<Type> *first;                              // pointer to first node of list
    nodeType<Type> *last;                               // pointer to last node of list
    void copyList(const List<Type>& );                  // makes a copy of the list.
    void destroyList();                                 // deletes all the nodes from list.
};
#endif
