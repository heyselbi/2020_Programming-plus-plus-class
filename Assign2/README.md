# Math 280: Assignment 3
## Assigned Wednesday, Jan. 15, 2020, due Wednesday, Jan. 22, 2020

__[C0]__ Initial preparation:

* Familiarize yourself with the the operators +=, -=, *=, /=. Operators of these types will be useful for constructing the programs in this assignment.

* Familiarize yourself with how to exclude a source file from a project build. In this assignment you will be working with three small programs and if you want to create and use a single project to work with them all, you'll need to know how to exclude one or more of them from the build process. (A project can incorporate multiple source files, but only one file can contain int main().) For Visual Studio and Eclipse users you can exclude a specific file from the build by right clicking the __file name__ in the IDE, selecting Properties and then selecting "Exclude from Build" from the appropriate sub-menu.

* Familiarize yourself with the standard library math routines that are available (Search "C++ cmath") .


__[C1]__ Download and then modify the program MachineLimits.cpp so that it also prints out the properties of the built-in type __long__ and built in type __double__. Run the program and cut and paste the output into a plain text file Assign2results.txt.

__[C2]__ Create a program Nfactorial.cpp that uses a __for__ loop to compute and print out k factorial (k!) for values of k from 1 to N, where N is an integer input. This program will repeat the computation multiple times with the computation being done using different types to accumulate the product. Specifically, the program should compute and print out the results when the product is accumulated with a variable of

* type int
* type unsigned int
* type double
By observing the output of your program, for each data type determine the maximal value of k (for k ≤ 30) for which the computation of k! is still reasonable. Place the results of your observation in Assign2results.txt.

To get started, feel free to download and modify the sample code "Background2.cpp" that was discussed in lecture. (Be sure to change the name as well as the internal comments however).

__[C3]__ Create a program ExpTest.cpp that computes and prints out the values of the k-term Taylor series approximation to *e^x* for k = 1 to N, where N is input. The terms in the sum will be accumulated using a variable of type __double__. Your output should also print out the value of *e^x* returned by the standard library routine std::exp(x) as well as the absolute difference between the values of the Taylor series approximation and std::exp(x). This program will repeat the computation multiple times with the computation being done using different types to accumulate the product that's required to obtain k!. Specifically, the program should compute and print out the results when k! is accumulated with a variable of

* type int
* type unsigned int
* type double
By observing the output of your program, for each data type determine the maximal value of k (for k ≤ 30) for which the Taylor series approximation of *e^x* is reasonable for the value at x=1.0. Place the results of your observation in Assign2results.txt.

In problem __[C3]__, use the value x=1.0 when determining the maximal value of k. The problem statement has been modified to read: 

By observing the output of your program, for each data type determine the maximal value of k (for k ≤ 30) for which the Taylor series approximation of *e^x* is reasonable for the value at *x=1.0*.

Tips:

* You should construct ExpTest.cpp as a modification of Nfactorial.cpp, so copy Nfactorial.cpp to ExpTest.cpp, and then modify appropriately.
* You will need to add the include for cmath (#include <cmath>) in order to have access to the standard library math functions.
* You can set the output format of floating point values using statements of the form

`cout.setf(ios::scientific); // Sets the format to scientific notation
cout.precision(17); // Sets the number of digits output to 17 (not the precision of the calculation!)`

These format specification are used for all subsequent invocations of cout. Other ways to modify the output format will be discussed later in the course.
 

What you should turn in.
* Submit to the course web site the file Assign2results.txt that contains your results from __[C1]-[C3]__.
* Submit to the course web site the program files Nfactorial.cpp and ExpTest.cpp. These files must have these __exact__ names. Do not upload the executable or any other files, e.g. the IDE settings files created by the IDE
