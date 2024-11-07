#include <iostream>
void foo(){

}
int main(){
    int a, b, c;
    char h, j;
    std::cout << "a: " << &a << "\n" << "b: " << &b << "\n" << " c: " << &c;
    std::cout << "\nfoo: " << (void*)&foo << std::endl;
    std::cout << "h: " << (void*)&h << "\n" << "j: " << (void*)&j;
    //Note that if we dont cast to void*, the addresses wont be printed out correctly
    //Study more this topic
    return 0;
}
