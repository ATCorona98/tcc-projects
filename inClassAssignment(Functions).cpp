// Program Driver is a program to test function Swap

#include <iostream>
using namespace std;

void Swap(int &a, int &b);             //added by reference to actually have the integers be changed
// The contents of a and b are swapped

int main ()
{
  int  x;
  int  y;
  cout  << "Enter two integer values; press return."  << endl;
  cin  >> x  >> y;

  cout  << "Input values: x="  << x  << " and y="  << y  << endl;
  Swap(x, y);
  cout  << "Values swapped: x="  << x  << " and y="  << y  << endl;
 return 0;
}

// ***************************************

void  Swap(int &a, int &b)            //added by reference to actually have the integers be changed
{
  int x;

  x = a;
  a = b;
  b = x;

}

