
# Math 280: Assignment 4
## Assigned Wednesday, Jan. 29, 2020, due Wednesday, Feb. 5, 2020
**[C1]** Create a program to implement and carry out tests whose results will enable you to answer the following questions. The answers are machine and operating system dependent, so when you record the answers, specify the compiler and operating system used.

(a) What are the default values that are given to the elements of a statically allocated **int** array that is declared but not initialized?

(b) What are the default values that are given to the elements of a statically allocated **double** array that is declared but not initialized?

(c) What are the default values that are given to the elements of a dynamically allocated array of **int**s that is created but not initialized?

(d) What are the default values that are given to the elements of a dynamically allocated array of **double**s that is created but not initialized?

Syntax: The pair of statements to dynamically allocate and de-allocated arrays of built in types has the form

`type* arrayName = new type[size];`

`delete [] arrayName;`

The statement invoking **new** allocates an array of type type and size size. size is an integer constant or integer valued variable.

(e) If zArray is an array of doubles statically declared to be of size 3 what is the output you obtain when you print out zArray[3]?

(f) What happens, if anything, if zArray is an array of doubles statically declared to be of size 3 and you try to assign
zArray[3] the value 1.0?

Place the answers to your questions in the plain text file **Assign4results.txt**.

**[C2]** The goal of this problem is to create a class NumParams so that when inserted into NumParamsTest.cpp and NumParamsTest.cpp is compiled into an executable, the program runs successfully.

(a) Download NumParamsTest.cpp.

(b) In NumParamsTest.cpp, define a class **NumParams**, a class for storing numerical parameters and providing the capability to output values of the parameters. The class you create will be the implementation of the class described by the following class diagram (UML class diagram notation):


i.e. the class will have data members eps, kMax, and kStar, a default constructor, a copy constructor, a destructor, and a member function that prints out the values of the parameters when invoked.

(c) Verify that you can compile and successfully run the program NumParamsTest.cpp.You will be submitting your modified version of NumParamsTest.cpp.





**[C3]** The goal of this problem is to create a class **ExpFun** so that when inserted into ExpFunTest.cpp and ExpFunTest.cpp is compiled into an executable, the program runs successfully.

(a) Download ExpFunTest.cpp.

(b) In ExpFunTest.cpp, define a class ExpFun, a class to create approximate values of the exponential function. The class you create will be the implementation of the class described by the following class diagram (UML class diagram notation):

 ExpFun


(c) Verify that you can compile and successfully run the program ExpFunTest.cpp.You will be submitting your modified version of ExpFunTest.cpp.


What you should turn in.
Submit to the course web site the your answers to [C1] in the plain text file Assign4results.txt.
Submit to the course web site your appropriately modified versions of the program files NumParamsTest.cpp (for **[C2]**) and ExpFunTest.cpp (for **[C3]**).
