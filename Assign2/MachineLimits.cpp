/*
 * MachineLimits.cpp
 *
 * A program to capture and print out numeric limits associated
 * with C++ built in data types.
 *
 * Created on: Jan 14, 2020 for Math 280
 *
 */

#include <iostream>
#include <limits>     // For standard library numeric_limits class
using namespace std;

int main()
{
    numeric_limits<double>           doubleLimits; // numeric_limits instance for built-in type int
    numeric_limits<unsigned int> uIntLimits; // numeric_limits instance for built-in type uInt

    numeric_limits<float>       floatLimits; // numeric_limits instance for built-in type float

    cout << "Integer type properties " << endl << endl;

    cout << "Max double : " << doubleLimits.max() << endl;
    cout << "Min double : " << doubleLimits.min() << endl;

    cout << "Max unsigned int : " << uIntLimits.max() << endl;
    cout << "Min unsigned int : " << uIntLimits.min() << endl;

    cout << endl;
    cout << "Floating point type properties " << endl << endl;

    cout << "float mantissa decimal digits : " << floatLimits.digits10 << endl;

    cout << "float max exponent  : " << floatLimits.max_exponent10 << endl;
    cout << "float min exponent  : " << floatLimits.min_exponent10 << endl;

    cout << "float max    : " << floatLimits.max() << endl;
    cout << "float min    : " << floatLimits.min() << endl;

    cout << "double machine epsilon (unit round off) : " << doubleLimits.epsilon() << endl;

    cout << "XXXX Execution Complete XXX" << endl;
    return 0;
}






