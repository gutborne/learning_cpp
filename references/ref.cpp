#include <iostream>

int main(){
    //The symbol & has another meaning and it is to work as a sort 'alias' to some
    //variable. In technical terms, it will be called a reference to another variable.
    //let's see how it works in the exemples bellow:
    int a = 20;
    int& ref = a;/*here we have a reference to 'a', that means both variables can be
    used interchangeably*/
    std::cout << a << " " << &a << std::endl;
    std::cout << ref << " "<< &ref << std::endl;
    /*As we can see the value of ref and &ref is equal to a and &a, respectively */
    /*That means if we change the value inside 'a', this will change 'ref' and
    vice-versa. We'll see this bellow: */
    a = 5;//changing a
    std::cout << "a: " << a << " " << "ref: " << ref << std::endl;
    ref = 7;//changing reg
    std::cout << "a: " << a << " " << "ref: " << ref << std::endl;
    /*References will come at handy when we're treating about pass by reference */
    //THINGS TO BE CAREFUL ABOUT:
    //->Only variables that are initialized can be referenced. For example:
    int b;
    ref = b; /*Trying to reference 'b' will generate this warning: 
    'b' may be used uninitialized*/
    //->Pointers to Null wont give me the same previous warning, but in practical
    //terms, it illegal bc it isn't initialized:
    int* ptr = nullptr;
    int*& ref_ptr = ptr;
    //->And what if we try to assign an int value to a int&. Well, that's illegal as
    //well and it will give the error bellow:
    //int& ref2 = 7;
    /*error: cannot bind non-const lvalue reference of type 'int&' to an rvalue of 
    type 'int'*/
    return 0;
}
