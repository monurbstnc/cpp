#include "lib/exercise-2.hpp"
#include <iterator>

int main()
{

    int a {12};
    int collection[] {25,35,65,54,12};
    int collection_size = std::size(collection);
    std::cout << "Collection size : " << collection_size << std::endl;
    int result = hunt_down(a,collection,std::size(collection));
    std::cout << "int index : " << result << std::endl;

    // Lets try with const char*

    const char* target {"Ada"};
    const char*  str_collection[] {"Ali","Veli","Ada","Test"};
    std::cout << "str_collection size : " << std::size(str_collection) << std::endl;
    int result_str = hunt_down(target,str_collection,std::size(str_collection));
    std::cout << "str index : " << result_str << std::endl;


}