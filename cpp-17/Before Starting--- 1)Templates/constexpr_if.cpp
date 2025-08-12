/*
Conditional compilation of our code 

Suppose we have two functions and one that works really well with double types
and the other one works well with integral types 
and we want to users to be able to use this functions through a function template.
*/


#include <iostream>
#include <type_traits>


void floating_point_func(double d)
{

    std::cout << "Floating point function .." << std::endl;
}


void integral_func(int i)
{
    std::cout << "İntegral function .." << std::endl;
}


/*
When we found the correct branch in our if statements, the other things are going to be discarded 

*/
template <typename T>
void func(T t)
{
    if constexpr(std::is_integral_v<T>)
    {
        integral_func(t);
    }
    else if constexpr(std::is_floating_point_v<T>)
    {
        floating_point_func(t);
    }
    else
    {
        static_assert(std::is_integral_v<T> || std::is_floating_point_v<T>, "Argument must be integral or floating point    ");

    }
};

int main()
{
    func("Hello");

    return 0;
}