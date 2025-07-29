/*

Structured bindings allow you to initialize multiple entities by the elements 
or members of an object.
Structured bindings in C++17 are a feature that allows you to unpack tuples, pairs, structs, or arrays into individual variables more conveniently.
*/

#include <iostream>



// Suppose you have defined a structure of two different members
struct MyStruct
{
    int i = 0;
    std::string s;
};


//Structured bindings are especially useful for functions returning structures or arrays. For example, consider you have a function returning structure
//We can not define structure
MyStruct getStruct(){
    return {75,"Asdfg"};
}

int main()
{

    MyStruct ms;
    ms.i = 11;
    ms.s = "Adadas";
    // You can bind members of this structure directly to new names by using
    //the following declaration

    auto [u,v] =  ms;
    //Here the names u and v are what is called structure bindings. To some extend they decompose the object passed for initialization
    // at some point they were called decomposing declarations 

    std::cout << u << "\t"<< v << std::endl;

    //You can directly assign the result of two entites giving local names to the returned data members.
    auto [id,val] = getStruct();
    //id and val are names for the members i and s of the returned structure.

    /*
    The benefit is direct access and the ability to make the code more readable by
    binding the value directly to the names that convey semantic meaning about their purpose 
    
    semantic meaning : The meaning or role the name tells you about what the variable represents
    in your program.
    */

    

    return 0;
}