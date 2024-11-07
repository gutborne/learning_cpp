#include <iostream>
#include <stdint.h>
#include <string.h>
int main(){
    int var1 = 5698;
    //std::cout << sizeof(239639405698) << std::endl; how many bytes this number represents
    std::cout << sizeof(var1) << std::endl;
    int64_t var2 = 5948509345;//study more about int64_t
    std::cout << sizeof(var2) << std::endl;
    bool bool_var = true;
    std::cout << bool_var << std::endl;
    float var_float = 5.53475348975;//see more on cppReference
    std::cout << var_float << std::endl;
    std::string var_string = "asdkljfkals";
    std::cout << var_string << std::endl;//string aren't fundamental types
    return 0;
}
