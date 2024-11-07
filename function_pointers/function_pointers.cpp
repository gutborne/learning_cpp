#include <iostream>
#include <functional>

int add(int a, int b){
    return a + b;
}
int multiply(int a, int b){
    return a * b;
}
int main(){
    {
        std::cout << "TRADITIONAL USE OF FUNCTION POINTERS" << std::endl;
        int option = 0;
        std::cout << "(1) for add and any other number for multiply" << std::endl;
        std::cin >> option;
        int (*op)(int, int);
        if(option == 1)
            op = add;
        else
            op = multiply;
        std::cout <<  op(3,4) << std::endl;
        std::cout << "TRADITIONAL USE OF FUNCTION POINTERS" << std::endl;
    }
    {
        std::cout << "FUNCTION POINTERS WITH TYPEDEF" << std::endl;
        typedef int (*PFnInteger_operations)(int, int);
        PFnInteger_operations op;
        int option = 0;
        std::cout << "(1) for add and any other number for multiply" << std::endl;
        std::cin >> option;
        if(option == 1)
            op = add;
        else
            op = multiply;
        std::cout <<  op(5,8) << std::endl;
        std::cout << "FUNCTION POINTERS WITH TYPEDEF" << std::endl;
    }
    {
        std::cout << "MODERN WAY TO USE FUNCTION POINTERS WITH <FUNCION>" << std::endl;
        std::function<int(int, int)> op;//STUDY MORE ABOUT THAT
        int option = 0;
        std::cout << "(1) for add and any other number for multiply" << std::endl;
        std::cin >> option;
        if(option == 1)
            op = add;
        else
            op = multiply;
        std::cout <<  op(5,8) << std::endl;
        std::cout << "MODERN WAY TO USE FUNCTION POINTERS WITH  <FUNCION>" << std::endl;
    }
    return 0;
}
