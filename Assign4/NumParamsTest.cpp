/*
  NumParamsTest : A program to create, investigate and test
  the use of a class that is an aggregate of numerical
  parameters.

  Math 280

  Name :  ---> Selbi Nuryyeva <---
  Date :  ---> Feb 8, 2020 :(  <---

 */


#include <iostream>
using namespace std;

class NumParams
{
public:
//Data members
    double eps;
    int kMax;
    int kStar;
    
//Member functions
NumParams() //null constructor
{
    eps = 1.0e-09;
    kMax = 10000;
    kStar = 0;
}
    
NumParams(const NumParams& N) //copy constructor
{
    eps = N.eps;
    kMax = N.kMax;
    kStar = N.kStar;
}

virtual ~NumParams(){}; //destructor
    
void printParams()
{
    cout << "eps is " << eps << endl;
    cout << "kMax is " << kMax << endl;
    cout << "kStar is " << kStar << endl;
}
    
};

// Passing class instance by value

void PrintParameters_1(NumParams P)
{
	cout << "Numerical parameters " << endl;
	cout << "eps   : " << P.eps  << endl;
	cout << "kMax  : " << P.kMax << endl;
	cout << "kStar : " << P.kStar << endl;
}

// Passing class instance by reference

void PrintParameters_2(NumParams& P)
{
	cout << "Numerical parameters " << endl;
	cout << "eps   : " << P.eps  << endl;
	cout << "kMax  : " << P.kMax << endl;
	cout << "kStar : " << P.kStar << endl;
}


int main()
{
	NumParams numParams;

	// Printing default parameters using
	// member function

	cout << "Default parameter values: " << endl;

	numParams.printParams();

    // Setting parameters

	numParams.eps   = 1.0e-08;
	numParams.kMax  = 1000;
	numParams.kStar = 0;

	cout << endl;
	cout << "NumParams instance passed by value: " << endl;

	PrintParameters_1(numParams);

    // rRe-setting parameters

	numParams.eps   = 1.0e-08;
	numParams.kMax  = 2000;
	numParams.kStar = 0;

	cout << endl;
	cout << "NumParams instance passed by reference: " << endl;

	PrintParameters_2(numParams);

	cout << "XXX Execution Completed XXX" << endl;
	return 0;
}
