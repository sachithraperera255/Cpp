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


/*
    - Just like in C language size of the structure is determined by sum of the its data members
    - Compiler will add necessary padding to align memory.
*/
struct sizeofstruct
{
    char character;
    int a;
    int b;
};



int main ()
{
    Person p1;
    p1.age = 20;
    p1.height = 5.6;
    // std::cout<<"age: "<<p1.age<<std::endl;
    // std::cout<<"height: "<<p1.height<<std::endl;
    p1.printinfo();

    std::cout<<"Size of the structure "<<sizeof(sizeofstruct)<<std::endl;
    /*
        - The output of the above line is 12 (12-bytes) because
        char character = 1 byte
        int a          = 4 byte
        int b          = 4 byte
        padding        = 3 byte

        The processor read as in word which equal to 4-bytes. When char uses 1-byte in the word,
        rest of the 3-bytes in the word will be padded to align the memory.
    */
    
    return 0;
}