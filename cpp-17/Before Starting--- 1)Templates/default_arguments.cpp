/*
template <typename ReturnType = double, typename T, typename P>
ReturnType maximum(T a, P b);
*/


#include <iostream>


template <typename ReturnType = double, typename T, typename P>
ReturnType maximum(T a, P b);


int main()
{

    int a {8};
    double b {11.11};
    auto result1 = maximum(a,b);

    std::cout << "result 1 : " << result1 << "sizeof result1 : " << sizeof(result1) << std::endl;

    auto result2 = maximum<int,double,double>(a,b);
    std::cout << "result 2 : " << result2 << "sizeof result2 : " << sizeof(result2) << std::endl;
    
    return 0;
}

template <typename ReturnType = double, typename T, typename P>
ReturnType maximum(T a, P b)
{

    return ((a > b) ? a: b);
}