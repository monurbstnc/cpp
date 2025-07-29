/*
Pointer: Pointer is a variable that holds the memory address of another variable. A pointer needs to be dereferenced with the * operator to 
access to the memory location it points to.

References : A reference variable is an alias, that is, another name for an already existing variable. A reference like a pointer is 
also implemented by storing the address of an object .

*/

#include <iostream>
#include <string>


int main()
{
    int x = 55;
    int y = 11;
    // pointer to x
    int* ptr_x = &x;

    //A reference or alias of x 
    int& ref_x = x;
    std::cout << "ref_x : " << ref_x << " x : " << x << " ptr_x : " << ptr_x;
    std::cout << "************************************" << std::endl;
    ref_x = y; // Changing the value of x to y We can not reference some other variable again but we can point .
    ptr_x = &y; // ptr_x now pointing to y's address.

    std::cout << "ref_x : " << ref_x << " x : " << x << " ptr_x : " << ptr_x;
    

    

    return 0;
}


