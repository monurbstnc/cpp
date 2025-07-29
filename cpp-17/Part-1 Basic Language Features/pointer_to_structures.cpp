/*
A pointer to structure is a pointer that stores the address
of a structure variable.
*/
#include <iostream>
#include <string>

typedef struct Person {

    std::string name;
    int age;
}Person_t;

void printPerson_inefficient(Person_t person)
{
    //It will create a new variable called person and copy the values from the pointer to that variable.
    std::cout << "Name : " << person.name << " Age : "<< person.age << std::endl;
}


void printPerson_efficient(Person_t* person)
{
    std::cout << "Name : " << person->name << " Age : "<< person->age << std::endl;
}

int main()
{
    Person_t* ptr_person = new Person_t;
    // Now ptr_person1 points to person1. You can access p1's member through ptr 
    
    (*ptr_person).name = "Adas";

    // Option-2 using the arrow operator.

    ptr_person->age = 11;
    ptr_person->name = "Ahmet";

    /*
    why we use pointers to structure
    a) Memory efficient: You can pass large structures to functions without copying them
    just by passing a pointer

    b) Dynamic Memory Allocation : You can allocate structures at run time using malloc or new (C++)

    c) Linked Data Structures : Pointers to structures are essential in building linked lists,trees,graph

    */
    // Memory Efficient 
    printPerson_inefficient(*ptr_person);
    printPerson_efficient(ptr_person);
    
    delete(ptr_person);


    return 0;
}