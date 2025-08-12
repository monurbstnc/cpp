/*
template <int threshold, typename T> 
bool is_valid (T collection[], size_t size)
{
 //Function goes ..
}


Here int threshold is a placeholder for a value not a type. 
if we want to create a placehholder for a type we will use typename P or something..

What is the advantage of that ?

-- Suppose we have an array of temperature, for whatever research we are doing we need to know if 
a set of temperatures is valid or not.

In cpp-20, non template parameters can be of any basic built type : bool,double,int, ..

In cpp-17 and below, only int like types could be used as non type template parameters.


 

*/

#include <iostream>


template <int threshold, typename T>
bool is_valid(T collection[], size_t size)
{

    T sum {};
    for(size_t i{0}; i < size; i++)
    {
        sum+= collection[i];
    }
    return (sum > threshold) ? true : false;
};


//Another possibility parameter to the function



template <typename T>
bool is_valid_v2(T collection[], int threshold, size_t size)
{

    T sum {};
    for(size_t i{0}; i < size; i++)
    {
        sum+= collection[i];
    }
    return (sum > threshold) ? true : false;
};
int main()
{

    double temperatures [] {10.00,22.25,30.25,44.25,20.21,15.55};
    auto result = is_valid<10000>(temperatures, std::size(temperatures));
    std::cout << std::boolalpha;
    std::cout << "result : " << result << std::endl;

    auto result2 = is_valid_v2(temperatures,1000, std::size(temperatures));
    std::cout << std::boolalpha;
    std::cout << "result2 : " << result << std::endl;

    return 0;
}