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


A type specifier decltype returns the type of the specified expression. The type specifier decltype, along with the keyword, is primarly
useful for developers writing template libraries. Use auto and to declare a function template whose return type depends on the types of the 
template arguments. 


*/


#include <iostream>
#include <cstring>

// Here we are trying to use these variables before they come alive . That is why we got compiler error.
//template <typename T, typename P> 
//decltype((a > b) ? a : b) maximum(T a, P b)
//{
//    return((a > b) ? a : b)
//}



// Definition
//largest of the types will choosen as return type 
template <typename T, typename P> 
auto maximum(T a, P b) -> decltype((a > b) ? a : b);




int main()
{
    int a {9};
    char b {16};
    std::cout << "size : " << sizeof(decltype((a > b) ? a : b)) << std::endl;
    
    decltype((a > b) ? a : b) c{7};

    int x {11};
    int& ref_x = x;
    const int const_x = x;

    decltype(x) d ; // integer type

    decltype(ref_x) e = x; // int ref type

    decltype(const_x) f = x; //const int type

    decltype((x)) h = x; // int& double paranthesis


    auto result = maximum(a,b);
    std::cout << "result : " << result << "sizeof of result : " << sizeof(result) << std::endl;



    return 0;
}

//Declaration 
template <typename T, typename P> 
auto maximum(T a, P b) -> decltype((a > b) ? a : b)
{
    return ((a > b) ? a : b);
}
