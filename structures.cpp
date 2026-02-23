#include <iostream>

/*
    - Unlike in C, structures in C++ do not require "typedef" keyword to create a alternative. 
    The struct name automatically becomes the variable type.

    - These are also called named structures
*/

struct Person
{
    int age;
    float height;
};


int main ()
{
    Person p1;
    p1.age = 20;

    std::cout<<"age: "<<p1.age<<"\n";
    
    return 0;
}