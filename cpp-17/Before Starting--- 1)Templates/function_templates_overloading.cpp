#include <cstring>
#include <iostream>

template  <typename T> T maximum(T a, T b)
{
    std::cout << "Template overload called for T" << std::endl;
    return (a > b ? a : b);

}

// For c-strings we created this function overloading (raw overloading) not specialization

/*
const char* maximum(const char* a, const char* b)
{
    std::cout << "Function overload called " << std::endl;
    return(std::strcmp(a,b) > 0 ? a : b);

}
*/

// Overload through the templates

template <typename T> T* maximum(T* a, T* b)
{
    std::cout << "Template overload called for T* " << std::endl;
    return ((*a > *b) ? a : b);
}






int main()
{

    const char * g{"animal"};
    const char * h{"wild"};
    maximum(g,h);

    // With this config the compiler will think const char* function is better choice cause it is the exact same type

    // If we comment the const char* function the compiler thinks T* is better choice cause it takes pointer as parameter 
    // But in this method it is going to compare pointers not the C-strings 

    // Lets try with integers

    int a {11};
    int b {23};

    maximum(a,b);

    maximum(&a,&b);

    return 0;
}