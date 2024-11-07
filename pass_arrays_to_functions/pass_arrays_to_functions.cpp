#include <iostream>
#include <array>
/**
 * @brief this function will just print the arr
 * @param arr this is being passed by reference
 * @param size how many elements arr has
 */
void print_array_1(int arr[], int size){
    std::cout << "Inside print_array_1: " << std::endl;
    /*In this scope arr will be a pointer bc the address in which it resides is
    different than the address it points to*/
    std::cout << "&arr: " << &arr << "  arr: " << arr << std::endl;
    for(int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
    /*Bellow we have a wrong use of sizeof, since arr is decaying into a pointer, the
    sizeof(arr) will output how many bytes a pointer has, that means, 8 bytes, not 
    20 bytes as we supposed it could be. */
    //std::cout << sizeof(arr)/sizeof(int) << std::endl;
    arr[0] = 434;
    std::cout << "Inside print_array_1: " << std::endl;
}

void print_array_2(std::array<int, 5>& arr){
    std::cout << "Inside print_array_2: " << std::endl;
    for(int element: arr){
        std::cout << element << " ";
    }
    arr.at(0) = 8098;
    std::cout << std::endl;
    for(int element: arr){
        std::cout << element << " ";
    }    
    std::cout << "\nInside print_array_2: " << std::endl;
}
int* print_array_3(int size){
    std::cout << "Inside print_array_3: " << std::endl;
    int* p_array = new int[size];     
    /*for(int element: p_array){//this instruction won't work bc p_array isn't an iterable
        std::cout << element << " " << std::endl;
    }*/
    for(int i = 0; i < size; i++)
        *(p_array + i) = i + 1;
    for(int i = 0; i < size; i++)
        std::cout << p_array[i] << " ";
    std::cout << "\nInside print_array_3: " << std::endl;
    p_array[0] = 75829;
    return p_array;
}


int main(){
    //==========================PASS ARRAY TO FUNCTIONS==============================
    {
        //first way with a raw array
        int arr[] = {1, 5, 6, 7, 8};
        std::cout << "&arr: " << &arr << "  arr: " << arr << std::endl;
        for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
            std::cout << &arr[i] << " " << std::endl; 
        }
        std::cout << "Printing the elements out using range-based for loop" << std::endl; 
        for(int element: arr){
            std::cout << element << " "; 
        }
        std::cout << std::endl;
        /*Passing 'arr' to a function will pass the address where arr is pointing to,
        so we're passing by reference even not letting it explicitly*/
        print_array_1(arr, 5);
        std::cout << arr[0] << std::endl;
    }
    {
        //second way using the lib <array>
        std::array<int, 5> arr{2, 3, 4, 5, 6};
        /*if we pass this way we're passing by value bc STD arrays doesn't decay to
        pointers like in raw arrays when passed in functions*/
        //print_array_2(arr);
        print_array_2(arr);
        for(int element: arr){
            std::cout << element << " ";
        }
        std::cout << "\n";
    }
    {
        int size = 5;
        int* arr = print_array_3(size);
        std::cout << arr[0] << std::endl;
        delete[] arr;
    }
    //==========================PASS ARRAY TO FUNCTIONS==============================
    return 0;
}
