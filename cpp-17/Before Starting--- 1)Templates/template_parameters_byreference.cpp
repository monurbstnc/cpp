#include <iostream>

template <typename T> T maximum(T a, T b); //Declaration

template <typename T> T& ref_maximum(const T& a, const T& b);
int main()
{

    double a {24.55};
    double b {32.55};

    std::cout << "Inside the main before function call &a : " << &a << std::endl; //0x7ffdf6f32530
    auto max = ref_maximum(a,b);
    std::cout << "Inside the main after function call &a : " << &a << std::endl; //0x7ffdf6f32530

    
    return 0;
}


template <typename T> T maximum(T a, T b){

    std::cout << "Inside the template &a :" << &a << std::endl; //0x7ffdf6f32508 it is different address cause it is copy of that variable. Passing by value.
}

template <typename T> T& ref_maximum(const T& a, const T& b){

    std::cout << "Inside the template &a :" << &a << std::endl;
}