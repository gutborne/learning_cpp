#include <iostream>
#include <array>
int main(){
    /* this lesson will be about loops */
    //==================STANDARD FOR===================
    {
        std::cout << "STANDARD FOR" << std::endl;
        int arr[] = {5,6,10,11};
        for(int i = 0; i < 4; i++){
            std::cout << arr[i] << " ";
        }
        /*this way of for loop will generate a infinite loop 
        for(;;){
            std::cout << "h ";
        }*/
        std::cout << "\nSTANDARD FOR" << std::endl;
    }
    //==================STANDARD FOR===================
    //==================STANDARD FOR LOOP + ARRAY LIBRARY===================
    { 
        std::cout << "\nSTANDARD FOR LOOP + ARRAY LIBRARY" << std::endl;
        std::array<int, 4> arr{6, 7, 8, 9};
        std::cout << std::endl;
        for(int i = 0; i < arr.size(); i++){
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "\nSTANDARD FOR LOOP + ARRAY LIBRARY" << std::endl;
    }
    //==================STANDARD FOR LOOP + ARRAY LIBRARY===================
    //==================RANGE-BASED FOR LOOP===================
    {
        std::array<int, 4> arr{6, 7, 8, 9};
        /*  Note that inside the range-based loop we have: std::cout << arr[i] << " ";
            this is wrong bc the variable 'i' will receive the current value of arr.
            Let's say this current one is 5, so i = 5 and if we state arr[i], we're
            accessing a value out of the array's bound.
        */
        int raw_arr[] = {4, 5, 1, 8,};
        for(int i: arr){
            //std::cout << arr[i] << " "; wrong way
            std::cout << i << " ";
        }
        std::cout << std::endl;
        //range-based for loops work in raw arrays as well
        for(int element: raw_arr){
            std::cout << element << " ";
        }
        //auto will make the compiler deduce the type of element(study more)
        std::cout << std::endl;
        for(auto element: raw_arr)
            std::cout << element << " ";
    }
    //==================RANGE-BASED FOR LOOP===================
    //==================WHILE==================================
    {
        std::cout << "\nWHILE LOOP" << std::endl;
        int count = 0;
        while(count < 5){
            std::cout << "inside while -> " << count << "\n";
            count++;
        }
    }
    //==================WHILE==================================
    //==================DO-WHILE==================================
    {
        std::cout << "DO-WHILE" << std::endl;
        int count = 0;
        do{
            std::cout << "inside while -> " << count << "\n";
            count++;
        }while(count < 5);
    }
    //==================DO-WHILE==================================
    
    return 0;
}
