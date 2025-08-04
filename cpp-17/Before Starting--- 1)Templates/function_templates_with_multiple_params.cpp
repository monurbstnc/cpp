
/*
Syntax : 
BAD -- DESİGN

template <typename T, typename P> P mex(T a, P b);

This is bad design cause we return type P, and maybe it is not we want to return..

A better approach : Separate parameter for return type.

template <typename ReturnType, typename T, typename P> 
ReturnType maximum(typename T , typename P); 

A better approach : Explicit template arguments..

Return type is int
int max1 = maximum<int,long,char>max(10,'a');

Return type is int, we going to specify the second parameter, last parameter is going to be deduced from the function call
int max2 = maximum<int,char>('e',12L);

Return type is int, ant the other parameters are going to be deduced from the function call
int max3 = <int>maximum(12,56.55);


Compiler error: does not know how to deduce return type.
int max4 = maximum(4,'L');


template <typename T, typename ReturnType, typename P> 
ReturnType maximum(typename T , typename P); 

maximum<char>('e',12); --> Error return type can't be deduced..



template <typename T, typename P, typename ReturnType> 
ReturnType maximum(typename T , typename P); 

int max  = maximum<int,char>('e',12L); -->Error return type can't be deduced..
*/

#include <iostream>
#include <iterator>

// Bad Design -- Problematic

/*
template <typename T, typename P> T maximum(T a, P b)
{
    return (a > b ? a : b);
};
*/


template <typename T, typename ReturnType, typename P> ReturnType maximum(T a, P b)
{
    return (a > b ? a : b);
}



int main()
{
    /*

    int a {16};
    double b {17.77};

    auto result = maximum(a,b);

    std::cout << "size of result : " << sizeof(result) << std::endl;
    */


    int a {22};
    double b {35.55};

    auto result = maximum<double,int,double>(a,b);
    std::cout << "size of result : " << sizeof(result) << std::endl;

    auto result2  = maximum<int>(a,b);// Error cause we did not specify return type and return type can't be deduced.

    return 0;

} 