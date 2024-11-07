#include <iostream>
void coutdown(int num){

}
int fib(int fib_number){
    //base case
    if(fib_number == 0 || fib_number == 1){
        return fib_number;
    }else{
        return fib(fib_number-1) + fib(fib_number-2);
    }
}
int main(){
    int a = 0, fib_number = 7;
    std::cout <<" fib: " << fib(fib_number) << std::endl;
    return 0;
}
