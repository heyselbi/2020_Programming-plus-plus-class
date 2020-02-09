//Selbi Nuryyeva
//Jan 22, 2020
//Math 280
//Assignment 2, Question [C3]

//Create a program ExpTest.cpp that computes and prints out the values of the k-term Taylor series approximation to ex for k = 1 to N, where N is input. The terms in the sum will be accumulated using a variable of type double. Your output should also print out the value of ex returned by the standard library routine std::exp(x) as well as the absolute difference between the values of the Taylor series approximation and std::exp(x). This program will repeat the computation multiple times with the computation being done using different types to accumulate the product that's required to obtain k!. Specifically, the program should compute and print out the results when k! is accumulated with a variable of

//type int
//type unsigned int
//type double
//By observing the output of your program, for each data type determine the maximal value of k (for k ≤ 30) for which the Taylor series approximation of ex is reasonable for the value at x=1.0. Place the results of your observation in Assign2results.txt.

#include <cmath>
#include <iostream>
#include <typeinfo>
using namespace std;

//My overall approach is to:
//1. Calculate accurate exp(x)
//2. Calculate approximate using Taylors in integer
//  a. Compute factorial N!
//  b. Compute x^k/N! and sum it up as it computes
//  c. Compute difference between accurate exp(x) and approximate with Taylors
//3. Repeat step 2 with unsigned integer and double

int main()
{
    //let's set the digit precision to 17
    cout.setf(ios::scientific); // Sets the format to scientific notation
    cout.precision(17);
    
    //As set by the assignment, we initiate x as 1.0
    double x = 1.0;
    
    //1. Calculate accurate exp(x) when x=1
    double expSum = exp(x);
    //We will later use this value to calculate difference between accurate
    // and approximate values of e^x.
    
    cout << "Accurate exp(1) is: " << expSum << endl;
    
    //Approximation for e^x by Taylor series is computed by:
    // summation from k=1 to N of (x^k / k!)
    
    // Let's first get the number N for N! calculation
    int N;
    cout << "Enter N: ";
    cin >> N;
    
    //2. Calculate approximate exp(x) using Taylors in integer for k
    // factorialInt computes N! part of approximation and sumInt sums it up
    int factorialInt = 1;
    double sumInt=0.0;
    for(int k=1 ; k<=N ; ++k)
    {
        //  a. Compute factorial N!
        factorialInt *= k;
        //  b. Compute x^k/N! and sum it up as it computes
        sumInt = sumInt + (pow(x,k)/factorialInt);
        //here, pow(double,int) computes into double, while factorialInt is int
        //therefore, sumInt = double + (double/int) will result in double for all cases
        //cout << "factorialInt for " << k << " is " << factorialInt << endl;
        
        //uncomment below to see the resulting type of variables
        /*cout << typeid(factorialInt).name() << endl;
        cout << typeid(pow(x,k)).name() << endl;
        cout << typeid(sumInt).name() << endl;*/
    }
    cout << "\nApproximation with integer type for k is: " << sumInt << endl;
    //  c. Compute difference between accurate exp(x) and approximate with Taylors
    cout << "Deviation from exp(x) is: " << expSum - sumInt << endl;
    
    
    //3. Repeat step 2 with unsigned integer - only positive integer for k
    unsigned int factorialIntuns = 1;
    double sumIntuns=0.0;
    for(int k=1 ; k<=N ; ++k)
    {
        factorialIntuns *= (unsigned int)k;
        //cout << "factorialIntuns for " << k << " is " << factorialIntuns << endl;
        sumIntuns = sumIntuns + (pow(x,k)/factorialIntuns);
    }
    cout << "\nApproximation with unsigned integer type for k is: " << sumIntuns << endl;
    cout << "Deviation from exp(x) is: " << expSum - sumIntuns << endl;
    
    
    //3. Repeat step 2 with double for k
    double factorialDouble = 1.0;
    double sumDouble=0.0;
    for(int k=1 ; k<=N ; ++k)
    {
        factorialDouble *= (double) k;
        //cout << "factorialDouble for " << k << " is " << factorialDouble << endl;
        sumDouble= sumDouble + (pow(x,k)/factorialDouble);
    }
    cout << "\nApproximation with double type for k is: " << sumDouble << endl;
    cout << "Deviation from exp(x) is: " << expSum - sumDouble << endl;
    
    
    return 0;
    }

    
