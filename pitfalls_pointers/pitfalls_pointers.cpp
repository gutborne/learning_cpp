#include <iostream>

/* This var will be deleted when the function ends. That's why in the main scope we'll
have a dangling pointer bc it'll points to a region of memory that no longer exists.*/  
int* return_address(){
    int var = 10;
    return &var;
}
//this program will crash if executed
int main(){
    //1. dereference null pointers
    {
        std::cout << "dereference null pointers" << std::endl;
        //int* ptr = NULL;
        //*ptr = 69;
        std::cout << "dereference null pointers" << std::endl;
    }
    //2. dangling pointers
    {
        std::cout << "dangling pointers" << std::endl;
        int* ptr = return_address();
        std::cout << "*ptr: " << *ptr << "  " << ptr << std::endl;
        std::cout << "dangling pointers" << std::endl;
    }
        //3. memory leak
        std::cout << "memory leak" << std::endl;
        //3. memory leak basically happens when dynamic memory is allocated and forgotten
        //to be deallocated 
        int* num = new int;//where's the deallocation?
        std::cout << "memory leak" << std::endl;
    //4. double free
    {
        std::cout << "double free" << std::endl;
        int* num = new int;
        delete num;
        delete num;
        std::cout << "double free" << std::endl;
    }
    return 0;
}
