#include "lib/exercise-4.hpp"
#include <iostream>
#include <iterator>

int main()
{

    double collection[] {11.22,11.78,11.94,12.25,16.98,13.33};
    int result = find_value<std::size(collection)>(collection,16.98);
    std::cout << "result : " << result << std::endl;
    return 0;
}