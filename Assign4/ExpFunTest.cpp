/*
  ExpFunTest : A program to create, investigate and test
  the use of class ExpFun that provides approximations to
  the exponential function

  Math 280

  Name :  ---> Selbi Nuryyeva <---
  Date :  ---> Feb 8, 2020 :(  <---

 */

#include <iostream>
#include <cmath>
#include <typeinfo>
using namespace std;

class ExpFun
{
public:
//data members
    int kMax;
    int kStar;
    double eps;

//member functions
    ExpFun() //null constructor
    {
        kMax = 10000;
        kStar = 0;
        eps = 1.0e-09;
    }
    
    ExpFun(const ExpFun& E) //copy constructor
    {
        kMax = E.kMax;
        kStar = E.kStar;
        eps = E.eps;
    }
    
    virtual ~ExpFun(){}; //destructor
    
    void printParams()
    {
        cout << "kMax is " << kMax << endl;
        cout << "kStar is " << kStar << endl;
        cout << "eps is " << eps << endl;
    }
    
    double operator()(double x)
    {
            //Step 2: Initiate variables. Since we cannot compute 0!, we just use a shortcut and set sumInt to 1
            // in case kMax is set to 0. kStar is assumed to be 0 unless kMax is larger than 0.
            double kthTerm, sumDouble = 1.0, factorialDouble = 1.0;
            //kStar = 0;
            
            //Step 3: As long as kMax is equal or larger than 1
            //(if kMax is set to 0, kStar will remain 0m this whole loop will be skipped and 1.0 will be returned)
            for (int k = 1; k <= kMax; ++k)
            {
                //Step 4: Compute factorial (ie. k!)
                factorialDouble *= k;
                
                //Step 5: Compute kth term (ie. x^k/k!)
                kthTerm = (pow(x,k)/factorialDouble);
        //        cout << "\n" << k << "thTerm is " << kthTerm << endl;
                
                //Step 6: Now check the validity that eps is smaller than the absolute value of kth's term.
                //If yes, then add the kth term to overall sum and save which term it was (ie. k value)
                if (abs(kthTerm) > eps)
                {
                    sumDouble = sumDouble + kthTerm;
        //            cout << "And sum so far is " << sumDouble << endl;
                    kStar = k;
                }
               
                //Step 7: If computed kth term turned out to be smaller than the eps, then
                //subtract 1 from k since kth term did not pass the eps test and leave the loop
                else
                {
                    kStar = k - 1;
                    break;
                }
            }
        return sumDouble;
    }
};

int main()
{
	ExpFun expFun; // Create an instance of the ExpFun class

	// Set expFun parameters that won't change

	expFun.kMax = 1000;

    double eps;
    double expValue;

    // Set evaluation point

    double x  = 1.0;

    cout << " ExpFunTest Output " << endl;
    cout << endl;

    for (int epsPow = 2; epsPow <= 20; epsPow++)
    {
    	// Set tolerance

        eps        = pow(10, -epsPow);
        expFun.eps = eps;

        expValue = expFun(x);

        cout << "  eps    : " << expFun.eps;
        cout << "  kStar  : " << expFun.kStar;
        cout << "  Approx : " << expValue;
        cout << "  exp(x) : " << exp(x);
        cout << "  Difference : " << abs(expValue - exp(x)) / abs(exp(x)) << endl;
    }

	cout << "XXX Execution Completed XXX" << endl;
	return 0;
}
