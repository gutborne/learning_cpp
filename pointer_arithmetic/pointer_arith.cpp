#include <iostream>

int main(){
    //==========================POINTER ARITHMETIC==================================
    //Using the name of the array as kind of pointer
    {
        int arr[10];
        for(int i = 0; i < 10; i++){
            *(arr + i) = i;
        }
        for(int i = 0; i < 10; i++)
            std::cout << *(arr + i) << " ";
    }
    std::cout << "\n\n";
    {//Using a pointer to point to array 
        int arr[10];
        int* p_arr = arr;
        for(int i = 0; i < 10; i++){
            *(p_arr + i) = i;
        }
        for(int i = 0; i < 10; i++)
            std::cout << *(p_arr + i) << " ";
    }
    {
        int arr[2][3] = {{1,2,3}, {4,6,87}};
    }
    //==========================POINTER ARITHMETIC==================================

    return 0;
}
