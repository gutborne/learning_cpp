#include <iostream>

void pass_by_value(int n){
    n = 7;
    std::cout << "            inside pass by value " << std::endl;
    std::cout << "&n: " << &n << "  n: " << n << std::endl;
}

void pass_by_ref(int& n){
    n = 100; 
    std::cout << "            inside pass by reference " << std::endl;
    std::cout << "&n: " << &n << "  n: " << n << std::endl;
}
int main(){
    /*===================================PASS BY VALUE==============================*/
    {
        /*pass by value will create copies of values, so it will be more expensive
        memory-wise than pass by reference*/
        int var = 10;
        std::cout << "&var: " << &var << "  var: " << var << std::endl;
        pass_by_value(var); 
        std::cout << "&var: " << &var << "  var: " << var << std::endl;
    }
    /*===================================PASS BY VALUE==============================*/
    /*===================================PASS BY REFERENCE==============================*/
    int var = 10;
    /*pass by reference will pass a reference of the variable in main scope. that
    means if we change the value out of main scope, it`ll take effect on the main
    scope*/
    int& ref = var;
    std::cout << "\n&var: " << &var << "  var: " << var << std::endl;
    pass_by_ref(ref); 
    std::cout << "&var: " << &var << "  var: " << var << std::endl;
    /*===================================PASS BY REFERENCE==============================*/
    return 0;
}
