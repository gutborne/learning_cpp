#include <iostream>

int return_value(){
    int a = 10;
    return a;
}
void change_me(int& a){
    a = 100;
}
int& get_value(){
    static int value = 10;
    return value;
}

void set_value(const int& a){

}

void print_name(const std::string& name){
    std::cout << "Lvalue: " << name << std::endl;
    //name = name + " and santana!";
}
void print_name(std::string&& name){
    std::cout << "Rvalue: " << name << std::endl;
    name = name + " and afksdjflkajsd!";
    std::cout << "Rvalue: " << name << std::endl;
}
int main(){
    {
        /*
        the definitons bellow won't be formal ones!
        1. Lvalue: are types that are stored in some place in memory, thus it's possible
        to retrieve the address of this value. Commonly, they're positioned in the left side
        of the expression.
        */
       int a = 10; //a is a lvalue
       //some wrong examples to understand better:
       int i = 30;
       //70 = i; //this expression(assignment) will give this error: expression must be a 
       //modifiable lvalue. this is happening bc we're trying to assign i, that is an
       //lvalue, to the lvalue 70. Note that do something like this doesn't make sense
       //bc 70 is just a temporary value and it isn't able to store the de value of i
       //inside it.
        //(40 + 40) = i; this one will give me the same error and the reason is the same
        int b = 60;
        int z = a + b;
        //Regarding a, b and z, Which of these are lvalues and rvalues?
            //lvalues: a, b and z       rvalues: 10, 60 and (a + b)
            //why (a+b) is a rvalue? bc we're evaluating the sum of a and b. Another fact
            //is we can't take the address of (a+b) and it wouldn't even have sense.
        z = return_value();//that's gonna work
        //return_value() = i;//wrong 
        int arr[a+i];//arr is a lvalue, whereas a+i are rvalues
    }
    {
        /*
        2. Rvalue: basically, they're types that are temporary and we can't take the address of
        */
        int i = 10;
        int a = (i + 1);
        int z = return_value() + 90;
    }
    {
        /*
        3. Lvalue-reference: almost the same definition of lvalue
        */
        int a = 10;
        change_me(a);//it work
        //change_me(10); it doesn't work
        std::cout << "a: " << a << std::endl;
        //RETURNING A LVALUE-STUDY MORE LATER   
        std::cout << "get_value:  " <<  get_value() << std::endl;
        get_value() = a + a;
        std::cout << "get_value: " <<  get_value() << std::endl;
        //calling a function using rvalues or lvalues
        const int& n = 50;
        set_value(a);
        set_value(50);
        std::string first_name = "Mateus";
        std::string last_name = "Gutemberg";
        std::string fullname = first_name + last_name;
        print_name(fullname);
    }
    /*
    4. Rvalue-reference:
    */
   {
        std::string first_name = "Mateus";
        std::string last_name = "Gutemberg";
        print_name(first_name + last_name);
   }
    return 0;
}
