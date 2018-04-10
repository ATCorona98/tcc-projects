// This program tests simple operations of a linked stack
// Written by Jeff Goldstein, TCC Adjunct Professor, VB Campus
// This program may also test YOUR implementation of a Stack from Lab 3 with List class.
// Date: 04/04/2018

#include <fstream>
#include <iomanip>
#include "linkedStack.h"
//#include "List.cpp"

using namespace std;

void title();
void converter(linkedStackType<char> );
void printStack(linkedStackType<char> );

ofstream fout("Output.txt");

int main()
{
	linkedStackType<char> stack;	// stack object accepting string inputs
	title();						// prints the title
	converter(stack);				// convert each # to respective bases
	fout.close();					// close the output file
    return 0;						// return 0 to indicate OS is ok
}

void title()
{									// title with column headings in correct places
	cout << setw(22) << "S T A C K   E X A M P L E" << endl;
	cout << setw(22) << "=========================" << endl << endl;
	cout << setw(8)  << " ";

	fout << setw(22) << "S T A C K   E X A M P L E" << endl;
	fout << setw(22) << "=========================" << endl << endl;
}

// a simple function to test your stack operations  LIFO
void converter(linkedStackType<char> s)
{
	s.push('H');            // push each letter.  Last In, First Out
	s.push('E');
	s.push('L');
	s.push('L');
	s.push('O');

    printStack(s);          // print the stack top to bottom
}

// prints the stack that was created
void printStack(linkedStackType<char> s)
{
	while(!s.isEmptyStack())
	{
		cout << s.top() << " ";     // look, but don't remove
		fout << s.top();            //  "     "    "      "
		s.pop();                    // remove the top letter & discard
	}
	cout << endl << endl;
	fout << endl << endl;
}

// can you print stack in the same order as it was inputted?
void printInputOrder(linkedStackType<char> s)
{
    cout << "?" << endl;
}
