#include <iostream>

struct Values{
    int x;
    int y;
};


Values function1(Values x, Values y)
{
    Values temp;

    temp.x = (x.x + y.x)/2;
    temp.y = (x.y + y.y)/2;

    return temp;
}

Values *function2(Values *x, Values *y)
{   
    // Creating memory in heap in size of Value struct
    Values *temp = new Values; // You could write this line as new (Values), no error in here

    /*  Why do we use "->" instead of "." because in this function temp is Values pointer 
        variable pointing to memory allocated in heap therefore when accessing variables we have
        dereference content in the address and access the member.
    */
    temp->x = (x->x + y->x)/2;
    temp->y = (x->y + y->y)/2;

    return temp;
}

void function3(Values *x, Values *y, Values *outPut)
{
    outPut->x = (x->x + y->x)/2;
    outPut->y = (x->y + y->y)/2;
}


int main()
{
    
    Values data1{
        data1.x = 2,
        data1.y = 6
    };

    Values data2{
        data2.x = 2,
        data2.y = 6
    };

    //Passing structure to a function by value
    Values average1 = function1(data1, data2);
    std::cout<< "Average1 of x: "<< average1.x <<" and y: "<< average1.y <<std::endl;

    //Passing by reference using a pointer and heap
    Values *average2 = function2(&data1, &data2);
    std::cout<< "Average2 of x: "<< average2->x <<" and y: "<< average2->y <<std::endl;
    delete(average2);

    //Passing by reference without using memory allocation in heap
    Values average3;
    function3(&data1, &data2, &average3);
    std::cout<< "Average3 of x: "<< average3.x <<" and y: "<< average3.y <<std::endl;

    return 0;
}