#pragma once

#include <cstring>
#include <iostream> 
template <typename T> int hunt_down(const T value, const T* collection, unsigned int size)
{
    std::cout << "Inside the template .. " << std::endl;
    for(unsigned int i = 0; i < size; i++)
    {
        if(collection[i] == value)
        {
            return (int)i;
        }
    }
    return -1;
};


int hunt_down (const char* value, const char** collection, unsigned int size);