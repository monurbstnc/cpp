/*
Templates are the basis for generic programming in C++. As a strongly-typed language, C++ requires all variables to have a specific type, either explicitly
declared by the programmer or deduced by the compiler Templates enable you to define the operations of a class or function.
*/

#include <iostream>
#include <string>


/*
Template says that it is a template and evaluated at compile time.Basically this is not a function or code.
This is actually created when we actually call it by the compiler. 
It copies the function when we call it with the correct data type.
*/
template<typename T>
void Print(T val)
{
    std::cout << val << std::endl;
}

void Display(int x)
{
    std::cout << x << std::endl;
}

void Display(std::string val)
{
    std::cout << val << std::endl;
}

void Display(float val)
{
    std::cout << val << std::endl;
}


/*
In the above we manually define 3 Display methods. We overload that Display function. That is okay. Some people prefer to doing this. 
*/

int main()
{

    // T is replaced with std::string 
    Print<std::string>("Adadsa");

    return 0;
}

