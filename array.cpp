#include <iostream>

int main()
{
    /*
        - An array is a data type that can store same type of element.
        - The example below shows how to declare an array
    */
    int x = 5;
    int arr[x] = {1,2,3,4,5};

    std::cout<< "Size of arr: "<<sizeof(arr)<<"\n"; // output: 20
    // size of each int is 4-bytes therefore, 4x5 = 20

    // In C++, you can declare an array without providing the array size. C++ is capable of
    // counting how many elements are in the array
    int array[] = {1,2,3,4,5,6};
    std::cout<< "Size of array: "<<sizeof(array)<<"\n";// output: 24
    
    //This for loop will loop through all the element in the array and will print random values
    // for the rest, because size of the array is 24-bytes
    //Looping through the array using sizeof
    for (int i = 0; i < sizeof(array); i++)
    {
        std::cout<< array[i] << " ";
    }

    // Calculate number of elements in the array
    int num_elements = sizeof(array)/sizeof(array[0]);
    std::cout<<"number of element in the array: "<<num_elements<< "\n";

    // Looping through the array using number of element in the array.
    for (int i = 0; i < num_elements; i++)
    {
        std::cout<< array[i] << " "<< "\n";
    }
    
    return 0;
}