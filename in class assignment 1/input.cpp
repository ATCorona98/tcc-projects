#include <iostream>
#include <cmath>	// Access power function
#include <iomanip>	// Access manipulators
#include <fstream>  // Access file i/o functions
#include <string>   // Access strings

using namespace std;

int main()
{
    // Input variables
    float loanAmt;      // Amount of loan
    float yearlyInt;    // Yearly interest
    int numYears;	    // Number of years
    ifstream inData;     // Link to input file
    ofstream outData;      // Link to output file

    // Local variables
    float monthlyInterest;	// Monthly interest rate
    float numberOfPayments;   // Total number of payments
    float payment;	        // Monthly payment
    string inFile;         // Input file name
    string outFile;          // Output file name

    // Prompt user for input file name
    cout << "Please enter an input file name including extension\n";
    cin >> inFile;
    // Open input file
    inData.open(inFile.c_str());

    // Prompt user for output file name
    cout << "Please enter an output file name including extension.\n";
    cin >> outFile;

    // Open output file
    outData.open(outFile.c_str());

    // Get first line of data from file
    outData << "Loan Amount: " << loanAmt << endl
            << "Yearly Interest: " << yearlyInt << endl
            << "Number of Years: " << numYears << endl
            << "Monthly Interest: " << monthlyInterest << endl
            << "Number of Payments: " << numberOfPayments << endl
            << "Monthly Payment: " << payment << endl << endl;

    // Prompt user for loanAmt, yearlyIn, numYears (Enter 0's to quit)  /* CHANGE CODE?
        inData >> loanAmt >> yearlyInt >> numYears;


    cout << endl << endl;

    // Loop until user enters 0... /* CHANGE CODE */
    while (loanAmt != 0){

       // Calculate values
        monthlyInterest = yearlyInt / 12;
        numberOfPayments = numYears * 12;
        payment = (loanAmt *
                    pow(monthlyInterest + 1, numberOfPayments)
                    * monthlyInterest)/(pow(monthlyInterest + 1,
                    numberOfPayments) - 1);

        // Send output to file
    outData << "Loan Amount: " << loanAmt << endl
            << "Yearly Interest: " << yearlyInt << endl
            << "Number of Years: " << numYears << endl
            << "Monthly Interest: " << monthlyInterest << endl
            << "Number of Payments: " << numberOfPayments << endl
            << "Monthly Payment: " << payment << endl << endl;

        // Send output to screen
        cout << fixed << setprecision(2)
             << "Loan amount: $" << loanAmt << endl;
        cout << fixed << setprecision(2)
             << "Interest rate: " << yearlyInt << endl;
        cout << "Years:  " << numYears << endl << endl;

        cout << "Your monthly payments are $" << payment << endl << endl << endl;

        // Get the next line of data from the file
        inData >> loanAmt >> yearlyInt >> numYears;

    }

    // Close files (necessary?)
    outData.close();
    inData.close();


    cout << "Good bye!" << endl;

    return 0;
}