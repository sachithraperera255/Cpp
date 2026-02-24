#include <iostream>

/*
    - Unlike in C, structures in C++ do not require "typedef" keyword to create a alternative. 
    The struct name automatically becomes the variable type.

    - These are also called named structures
*/


/*
    - In C language, functions are not allowed in the structure but C++ we declare functions in
    C++
    - Function that are declared in structures called "member function" and variables are called
    "data members".
*/
struct Person
{
    int age;
    float height;

    void printinfo()
    {
        std::cout<<"This person's age is "<<age<<"and height is "<<height<<std::endl;
    }
};


int main ()
{
    Person p1;
    p1.age = 20;
    p1.height = 5.6;
    // std::cout<<"age: "<<p1.age<<std::endl;
    // std::cout<<"height: "<<p1.height<<std::endl;

    p1.printinfo();
    
    return 0;
}