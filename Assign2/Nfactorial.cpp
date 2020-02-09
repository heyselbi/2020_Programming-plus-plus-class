//Selbi Nuryyeva
//Jan 22, 2020
//Math 280
//Assignment 2, Question [C2]
//Create a program Nfactorial.cpp that uses a for loop to compute and print out k factorial (k!) for values of k from 1 to N, where N is an integer input. This program will repeat the computation multiple times with the computation being done using different types to accumulate the product. Specifically, the program should compute and print out the results when the product is accumulated with a variable of

//type int
//type unsigned int
//type double
//By observing the output of your program, for each data type determine the maximal value
// of k (for k ≤ 30) for which the computation of k! is still reasonable. Place the results
// of your observation in Assign2results.txt.

#include <iostream>
using namespace std;

int main()
{
    // Let's first get the number N for N! calculation
    int N;
    cout << "Enter N: ";
    cin >> N;
    
    // Let's calculate Factorial with integer type
    int factorialInt = 1;
    for(int k=1 ; k<=N ; ++k)
    {
        factorialInt *= k; //sumFactorial = sumFactorial * k
    }
    
    // Now with unsigned integer type - integer is only positive
    unsigned int factorialIntuns = 1;
    for(int k=1 ; k<=N ; ++k)
    {
        factorialIntuns *= k; //sumFactorial = sumFactorial * k
    }
    
    // And last, with double type and precision of 3 decimal points
    double factorialDouble = 1;
    for(int k=1 ; k<=N ; ++k)
    {
        factorialDouble *= k; //sumFactorial = sumFactorial * k
    }
    
    cout.setf(ios::scientific); // Sets the format to scientific notation
    cout.precision(3); // Sets the number of digits output to 3 (not the precision of the calculation!)
    
    // Now let's announce what we got
    cout << "int type: " << factorialInt << endl;
    cout << "unsigned int type: " << factorialIntuns << endl;
    cout << "double type: " << factorialDouble << endl;
    
    return 0;
}
