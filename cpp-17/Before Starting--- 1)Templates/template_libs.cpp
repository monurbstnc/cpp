#include <iostream>
#include "lib/my_template.hpp"
 /*
 Because templates are instantiated at compile time with actual types, template definitions must be visible to the compiler
 So they should be in the header files(.h) not in source files(.cpp)

 So actually we dont need any source files, We can delete my_template.cpp
 
 */
int main()
{
    std::string student_to_find{ "Kumar" };
    const char* students[]{ "Mary", "Steve", "Kumar", "Ahmed" };
    int index{ hunt_down(student_to_find.c_str(), students, 4) };
    std::cout << "index : " << index << std::endl;
 
   
    return 0;
}
