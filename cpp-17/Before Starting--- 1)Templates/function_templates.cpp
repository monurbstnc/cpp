/*
Function templates allow us to write generic functions that work with different data types.
Instead of overwriting functions we use templates. It represents a family of the functions

When the compiler encounter how we call that function it generates a type specific version 
of that fnc.
*/



#include <iostream>
#include <string>

//If the parameters are the same type
template <typename T>

T find_max(T a, T b)
{
    return a > b ? a : b;
}


template <typename T1, typename T2>
int find_max_size(T1 a, T2 b)
{
    return sizeof(a) > sizeof(b) ? sizeof(a) : sizeof(b);
}

// If the parameters are different types
template <typename T1, typename T2>
std::string get_type_max_size(T1 a, T2 b)
{
    return sizeof(a) > sizeof(b) ? typeid(a).name() : typeid(b).name();
}

int main()
{
    double x = 10.6;
    double y = 5.4;
    int z = 5;
    int t = 25;
    double max = find_max<float>(x,y);
    //int max = find_max(y,t);
    /*
    We got compiler error cause they are not the same type, our argument list is same type
    */

    //Explicit template argument
    // When we do like this we say compiler to please use that type and replace that for T.
    auto max2 = find_max<double>(t,x); 
    std::cout << "max double : " << max << std::endl;

    int a;
    std::string str;
    int max_size = find_max_size(a,str);
    std::cout << "max size : " << max_size << std::endl;
    std::cout << "max size data type : " << get_type_max_size(a,str) << std::endl;

    return 0;
}
