/* 
Function deduce the return type
->
template <typename T , typename P> auto maximum(T a, T b);

When we do like this there is a rule, The largest type is deduced.


Explicit template arguments: Force return type on compiler

auto maximum<char,char>max('a', 9.8)

Here we explicitly specify argument list as char char so return type deduced to be char
IMPORTANT : As you can see function parameters does not effect return type when we specify our argument list

*/

#include <iostream>

template <typename T , typename P> auto maximum(T a, P b)
{

    return ((a > b) ? a : b);
}


int main()
{

    int a {12};
    double b {12.22};

    auto result = maximum(a,b);
    std::cout << "size of result : " << sizeof(result) << std::endl;

    // return type will be integer.
    auto max2 = maximum<char,int>('a',12);
     std::cout << "max2: " << max2 <<" sizeof max3 : " << sizeof(max2) << std::endl;

    
    //return type will be char --> 1 byte
    auto max3 = maximum<char,char>(10,11);

    std::cout << "max 3 : " << max3 <<" sizeof max3 : " << sizeof(max3) << std::endl;

    return 0;
}

