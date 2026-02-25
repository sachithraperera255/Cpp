#include<iostream>

struct Car
{
    int year;
    float km;
};

int main()
{
    Car car1 = {
        car1.year = 2015,
        car1.km = 2500.25
    };

    Car *ptr = &car1;

    /*
        In here, "*ptr" is in parenthesis because "." take precedence in C++. If you don't use
        parenthesis, compiler will try to access member of ptr which is not a struct but a pointer
        to structure. 
    */
    std::cout<<"Year of the car "<< (*ptr).year<<std::endl;

    /*
        To solve the above problem, -> operator can be used.
    */
   std::cout<<"Milage of the car "<<ptr->km<<std::endl;

    return 0;
}