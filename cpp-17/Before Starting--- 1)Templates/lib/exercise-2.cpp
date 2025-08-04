#include "exercise-2.hpp"


int hunt_down(const char* value, const char** collection, unsigned int size)
{
    std::cout << "Inside the function " << std::endl;
    for(unsigned int i = 0; i < size; i++)
    {
        if(strcmp(collection[i],value) == 0)
        {
            return (int) i;
        }
        
    }

    return -1;
}