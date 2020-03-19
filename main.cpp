#include <iostream>
#include "example.h"

using namespace smartgit;

int main()
{
    printLine(); printAnotherLine();

    std::cout     
	<< "Output is "
	<< calculateSquare(5)
	<< std::endl;

    return 0;
}
