#include "example.h"

#include   <iostream>
#include <cmath>

namespace smartgit
{
    double calculateSquareRoot(double x)
    {
      return(x*x);
    }

    void printLine() {
      std::cout
	<< "Hello world!" 
	<< std::endl;
    }
    void printAnotherLine() {
      std::cout
	<< "FoorBar"
	<< std::endl;
}

}
