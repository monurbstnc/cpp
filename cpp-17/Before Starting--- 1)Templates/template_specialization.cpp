#include <iostream>
#include <string>
#include <cstring>
template <typename T> T maximum(T a, T b)
{

    return (a > b) ? a : b;

};

template <typename T1, typename T2> auto maximum(T1 a, T2 b)
{
    std::cout << "-- inside the function template --" << std::endl;
    std::cout << "param1 : " << a << " param2 : " << b << std::endl;
    return (a > b) ? a : b;
    
}


// Template specialization 
// It specializes the maximum<T> function for T = const char*
/*
You can write const char* maximum(const char* a, const char* b) — that's just a normal function, not a template specialization.
You can fully specialize a single-type function template:
template <>
const char* maximum<const char*>(const char* a, const char* b);

ou cannot specialize a multi-type function template like this:
// This is illegal in C++
template <>
std::string maximum<std::string, int>(std::string a, int b);

Use overloading instead
*/
template<>
const char* maximum<const char*>(const char* a,const char* b)
{
    return (std::strcmp(a,b) > 0 ? a : b );
    //https://en.cppreference.com/w/cpp/string/byte/strcmp.html
}

 

int main()
{
    int x = 11, y = 21;
    float a = 14.32, b = 12.21;
    std::string s1 = "hello";
    std::string s2 = "world";

    std::cout << " maximum (x,y) : " << maximum(x,y) << std::endl ; // int type deduced .
    std::cout << "maximum(a,b) : " << maximum(a,b) << std::endl;
    std::cout << "maximum(s1,s2) : " << maximum(s1,s2) << std::endl; // w > h so result is world
    /*
    By comparing strings the default comparision is lexicographically what that means is ones that comes after in alphabetic order 
    */
    
    
    // What if we have const char* 
    

    const char* g {"wild"};
    const char* h {"animal"};
    std::cout << "maximum(g,h) : " << maximum(g,h) << std::endl; 
    // Here we compare const char* we are going to be comparing two pointers, we are returning whichever pointer is greater. 
    /*
    Lets say g is 0x4050 and h is 0x4055 so h is greater than g and we return b which is animal.
    */
    // We got compiler error cause types are different, our types in the tmeplate function is the same, so lets create another maximum template
    //std::cout << "maximum(x,a) : " << maximum(x,a) << std::endl;
    //lets create another maximum template
    std::cout << "maximum(x,a) -1 : " << maximum(x,a) << std::endl;
    // We force both parameters to be int
    std::cout << "maximum(x,a) -2 : " << maximum<int,int>(x,a) << std::endl;

    return 0;
}
