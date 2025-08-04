/* 
decltype : type of an expression. Getting the type of an expression

decltype as a return type 

If we do like below we got a compiler error.. Cause a and b is defined in the parameter of the function template.
template <typename T, typename P> decltype((a > b) ? a : b) maximum(T a, T b);


decltype as a "trailing" return type 

template <typename T, typename P> auto maximum(Ta, P b)-> decltype((a>b) ? a : b)
{
//Function code ..
}


Here auto is not about the return type deduction. It is just a placeholder for the return type that we are going to deduce with decltype
*/


#include <iostream>

int main()
{
    int a {9};
    char b {6};
    std::cout << "size : " << sizeof(decltype((a > b) ? a : b)) << std::endl;
    
    decltype((a > b) ? a : b) c{7};

    return 0;
}