#include <iostream>

int add(int a, int b){
    return a+b;
}
int main(){
    //==============================FUNCTIONS======================================
    {
        //declaring and defining the function previously
        int a = 1, b = 4;
        std::cout << "sum: " << add(a, b) << std::endl;
    }
    {
        //If the funcion is defined after the main(), like the function sub(),
        //then we have to declare in the scope first and after define the function
        //after the main scope
        int sub(int, int);
        int a = 70, b = 50;
        std::cout << "sub: " << sub(a, b) << std::endl;
    }
    {
        //another way to call a function using the type auto(study more)
        auto mult(int, int) -> int;
        int a = 5, b = 9;
        std::cout << "mult: " << mult(a, b) << std::endl; 
    }
    //==============================FUNCTIONS======================================   
    return 0;
}
int sub(int a, int b){
    return a-b;
}
int mult(int a, int b){
    return a*b;
}
