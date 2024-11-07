#include <iostream>

int main(){
    int var = 10;
    int* p_var = &var, *p_var2 = &var;//IMPORTANT STRETCH
    std::cout << "&var: " << &var << " var: " << var << std::endl;
    std::cout << "&p_var: " << &p_var << " p_var: " << p_var << std::endl;
    //dereference:
    std::cout << "Dereferencing the value of var: " << std::endl;
    std::cout << "*p_var: " << *p_var << " *p_var2: " << *p_var2 << std::endl;
    var = 7;
    std::cout << "Dereferencing the value of var: " << std::endl;
    std::cout << "*p_var: " << *p_var << " *p_var2: " << *p_var2 << std::endl;
    return 0;
}
