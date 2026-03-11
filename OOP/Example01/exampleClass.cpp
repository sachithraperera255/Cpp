#include <iostream>

/*
    - What is a Class?
        - Class is a instant of an object
        - In C++, classes are private by default. For an example if you try to call this
        any attribute in the main function using "." operator, it will not give access, but
        the "." operator can be use with struct to access its members because structures are
        public by default in C++.
*/

/*
    - What is a constructor?
        - Constructor is a special method or a function that automatically called, when a
        class is created. Constructor has the same name as the class, there are no return type, and
        usually declared as public.
*/

class Employee{
public:
    std::string Name;
    std::string Company;
    int Age;

    void Introducton()
    {
        std::cout<<"Name: "<<Name<<std::endl;
        std::cout<<"Company: "<<Company<<std::endl;
        std::cout<<"Age: "<<Age<<std::endl;
    }
};

int main(){
    
    Employee emp1;
    emp1.Name = "Berry Allen";
    emp1.Company = "Star lab";
    emp1.Age = 25;

    emp1.Introducton();
}
