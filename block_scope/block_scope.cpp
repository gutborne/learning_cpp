#include <iostream>
/*
-> x is in a global scope, that means x is visible for the entire program.
-> global variables are not the suitable option for the majority of cases due to
    its scope that encompass the entire program.
*/
int x = 20;
int n = 544;
int main(){
    std::cout << std::endl << "----------------global scope---------------------" << std::endl;
    std::cout << "->main() is the first local scope" << std::endl;
    std::cout << &x << " x -> global scope" << std::endl;
    std::cout << &n << " n -> global scope" << std::endl;
    x = 70;
    {//second local scope
        //note that the address of x in this scope is different from the x that
        //belongs to the other scope. Then they are two distinct variables
        int x = 79;
        int m = 50;
        std::cout << "==========second local scope=================" << std::endl;
        std::cout << &x << " x -> second local scope" << std::endl;
        std::cout << &m << " m -> second local scope" << std::endl;
        std::cout << x << std::endl;
        std::cout << "==========second local scope=================\n\n";
        
    }
    {//third local scope
        std::cout << "==========third local scope=================" << std::endl;
        int x = 1000;
        int m = 69;
        std::cout << &x << " x -> third local scope" << std::endl;
        std::cout << &m << " m -> third local scope" << std::endl;
        std::cout << "==========third local scope=================" << std::endl;
    }
    std::cout << &x << " x -> global scope" << std::endl;
    int m = 345, n =  0;
    std::cout << &m << " ->first scope"<< "\n" << &n << " ->first scope"<< std::endl;
    std::cout << "->main() is the first local scope" << std::endl;
    std::cout << "------------------------global scope-----------------" << std::endl;
    return 0;
}
