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

/*
    - What is encapsulation?
        - Encapsulation ensure that sensitive data are not directly accessible to an user or outside of the class.
        "private" or "protected" access specifier can be used to encap the data, use setter and getter methods to interact
        with them.
*/

/*
    - What is abstraction?
        - Abstraction is hiding complex things behind a procedure that makes them looks
        simple.
*/

class AbstractEmployee{
    
    virtual void AskForPromotion()=0;

};

class Employee: AbstractEmployee{
    
    //Following attributes are not visible out side of the class Employee
    protected:
    std::string Name;
    std::string Company;
    int Age;
    
    public:
    //Getter function/method
    void setName(std::string name)
    {
        Name = name;
    }
    //Setter function/method
    std::string getName()
    {
        return Name;
    }

    void setCompany(std::string company)
    {
        Company = company;
    }

    std::string getCompany()
    {
        return Company;
    }

    void setAge(int age)
    {
        Age = age;
    }

    int getAge()
    {
        return Age;
    }

    void Introduction()
    {
        std::cout<<"Name: "<<Name<<std::endl;
        std::cout<<"Company: "<<Company<<std::endl;
        std::cout<<"Age: "<<Age<<std::endl;
    }

    Employee(std::string name, std::string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

    void AskForPromotion(){
        if (Age > 30){
            std::cout<< "Congradulation! " << Name <<std::endl;
        }else{
            std::cout<< Name << " you have not completed minimum requirement" << std::endl; 
        }
    }
};

/*
    - What is inheritance?
        - Inheritance allows one class to reuse or access functions/methods and attributes from another class.
    
    - The derived class become the child class and base class become the parent class. in this example, Developer class 
    is the child class and Employee class is the parent class.
*/
class Developers: public Employee{

    public:

    std::string ProgrammingLanguage;
    Developers(std::string name, std::string company, int age, std::string programminglanguage)
        :Employee(name,company,age)
    {
        ProgrammingLanguage = programminglanguage;
    }

    void FixBug()
    {
        std::cout<<Name << " fixed a bug" << std::endl;
    }
};

int main(){

    Employee emp1 = Employee("Berry Allen", "Star lab", 25);
    Employee emp2 = Employee("Bruce Wayne", "Wayne Industries", 32);

    Developers dev1 = Developers("Bruce Wayne", "Wayne Industries", 32, "C++");

    dev1.FixBug();
}
