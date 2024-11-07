#include <iostream>
#include <array>
#include <algorithm>
#include <typeinfo>
int main(){
    //==================FILL FUNCTION=============================
        {
            std::cout << "\ntesting the FILL()\n";
            std::array<int, 4> arr;
            //std::fill(arr.begin(), arr.end(), 10); first way to call fill
            std::fill(std::begin(arr), std::end(arr), 10); //second way to call fill
            for(int element: arr){
                std::cout << element << " ";
            }
            
        }
    //==================FILL FUNCTION=============================
    //==================TYPE FUNCTION=============================
    /*First we have to include the 'typeinfo' library*/
    {
        int a = 70;
        int& ref = a;
        std::cout << "\ntesting the TYPEID()\n";
        std::cout << "type of a: " << typeid(a).name() << "  type of ref: " 
        << typeid(ref).name() << std::endl;
        //both a and ref must have the same type
    }
    return 0;
}
