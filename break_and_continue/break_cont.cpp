#include <iostream>
#include <array>
#include <algorithm>
int main(){
    //=============================CONTINUE======================================
    {
        /*Continue will ignore every instructions that are after it and will go back
        to the condition of the for/while loop. But it doesn't break the loop.*/
        std::array<int, 5> arr{2, 3, 4, 5, 6};
        int i = 0;
        for(int element: arr){
            if(element % 2 == 0){
                std::cout << "even: " << element << "\n";
            }else{
                continue;//
                std::cout << "this current number isn't even!\n"; //this stretch will
                //never be executed
            }
        }
    }
    //=============================CONTINUE======================================
    //=============================BREAK======================================
    {
        std::cout << std::endl;
        std::array<int, 5> arr{2,2,4,5,6};
        for(int element: arr){
            if(element % 2 == 0)
                std::cout << "even: " << element << "\n";
            else
                break;//this will go out of the for loop
        }
        std::cout << "out of the for loop";
    }
    //=============================BREAK======================================

    return 0;
}
