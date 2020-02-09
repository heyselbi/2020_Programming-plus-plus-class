# Math 280: Assignment 5
## Assigned Wednesday, Feb. 5, 2020, due Wednesday, Feb. 12, 2020

__[C1]__ Place the answers to the following questions in the plain text file __Assign5results.txt__.

__(a)__ Consider a function for approximating square roots with the prototype __double squareRoot(double& x)__. Will the expression __double z = sqrtRoot(2.0);__ compile? If not, how would you change the prototype so that it does compile?

__(b)__ Consider declaring an instance, expFun, of the ExpFun class with the __const__ prefix, i.e. using the statement __const ExpFun expFun;__. Can the member function with prototype __void printParameters()__ you implemented be invoked by expFun? If not how would you modify the prototype?

__(c)__ By inserting print statements into the constructors to determine when they are invoked, determine for your particular compiler the constructors that get called when you create an array of 3 ExpFun instances using a statement of the form __vector<ExpFun> expFunArray(3)__;

__[C2]__ Create a header file ExpFun.h that contains the class ExpFun definition (the class declaration with member function implementation in the class declaration body) and appropriate additional statements so that the program that contains __only__ the following statements compiles and runs successfully

```c++
    #include "ExpFun.h" 
    #include "ExpFun.h" // Included twice for checking

    int main()
    {
     ExpFun expFun;
     expFun.printParameters();
     return 0;
    }
```

__[C3]__ The goal of this problem is to have you create a program that prompts the user for the specification of a function of two variables and an evaluation point and prints out the value of the specified function at that point. An instance of the SCC::SymFun class is used to carry out the evaluation. In addition to sample programs in the SymFun20 repository that contains the necessary files for this assignment, the documentation in the repository contains code snippets that demonstrate the usage of the SCC::SymFun classes.

(i) Download the github repository SymFun20 from https://github.com/canderson6151/SymFun20.git and place in the directory containing your programming assignments. If you have git installed on your system, you can obtain this repository by using the git clone command, either from a command window or git gui. From a command window change directories to the directory containing your programming assignments and then execute

`git clone  https://github.com/canderson6151/SymFun20.git`
 
Or, if you don't want to work with git, go to the site https://github.com/canderson6151/SymFun20.git and select "clone or download/download zip" to download a zip file. You can then unzip this file to obtain a directory that has all the required files included. (You may want to rename the unzipped directory from SymFun20-master to just SymFun20).

(ii) Create a project and verify that you can compile and run both of the samples, SymFunSample1.cpp and SymFunSample2.cpp that are contained in the repository. Since the required header files are located in a separate directory, you will need to specify an additional include path in your IDE project settings.

Visual Studio : Highlighting the project, right click and choose Properties. Navigate to C/C++. Select Additional Include Directories text box, and select edit. Specify the directory containing the header file SCC_SymFun.h.

Eclipse: Highlighting the project, right click and choose Properties. Navigate to C/C++ General/Paths and Symbols, Includes, and then use Add to specify the path to the directory containing the header file SCC_SymFun.h

(iii) Create a program called SymFunTest.cpp that

* Prompts the user for the specification of a function in two variables x and y as a std::string.
* Echoes the input function
* Prompts the user for two double values that specify an evaluation point
* Echoes the evaluation point specified
* Evaluates the input function at the specified point using an SCC::SymFun instance
* Outputs the value of the function
 

#### What you should turn in.
Submit to the course web site the your answers to __[C1]__ in the plain text file Assign5results.txt.
Submit to the course web site your header file ExpFun.h (for __[C2]__) and your program SymFunTest.cpp (for __[C3]__).
