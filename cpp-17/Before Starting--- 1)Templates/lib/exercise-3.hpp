#include<iostream>
#include <cstring>



template <typename T, typename P> std::string concatenate(T a, P b)
{
    return (std::string(std::to_string(a) + std::to_string(b)));
};