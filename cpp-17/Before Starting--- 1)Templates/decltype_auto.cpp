/*
template <typename T, typename P> 
decltype(auto) maximum (T a, P b)
{
};

When we do like this, We can not split our template like declaration and definition.
Cause compiler can not see it before it really sees the function definition. For this reason
we can not split our code into definition and declaration.

*/



#include <iostream>


//largest of the types will choosen as return type 
template <typename P, typename T>
decltype(auto) maximum(T a, P b)
{
    return ( (a > b) ? a : b );
}



int main()
{
    int x {22};
    double y {15.55};

    auto result = maximum(x,y);

    std::cout << "result : " << result << "sizeof(result) : " << sizeof(result) << std::endl;
    

    return 0;

}


