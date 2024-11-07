#include <iostream>

int* allocate_mem(){
    return new int[30];
}
int main(){
    
    {//allocating and deallocating memory dynamically 
        int* arr = allocate_mem();
        for(int i = 0; i < 30; i++){
            arr[i] = i;
        }
        for(int i = 0; i < 30; i++)
            std::cout << " " << arr[i];
        delete[] arr;
    }
    {//trying to allocate 'dynamically' at runtime
    //allocate memory this way is dangerous
        int number_elements = 0;
        std::cout << "\nhow many elements? " << std::endl;
        std::cin >> number_elements;
        int arr[number_elements];
        for(int i = 0; i < number_elements; i++)
            arr[i] = i + 1;
    }
    {//allocating by the right way
        int number_elements = 0;
        std::cout << "\nhow many elements do you want to add? \n";
        std::cin >> number_elements;
        int* array_elements = new int[number_elements];
        for(int i = 0; i < number_elements; i++){
            array_elements[i] = i;
        }
        for(int i = 0; i < number_elements; i++){
            std::cout << " " << array_elements[i];
        } 
        delete[] array_elements;
    }
    return 0;
}
