#include <iostream>
#include <array>
int main(){
    {//local scope
        int arr[10];
        arr[11] = 50;//it allowed me to assign a value outside the range! why??
        for(int i = 0; i < 10; i++)
            arr[i] = i;
        for(int i = 0; i < 10; i++)
            std::cout << arr[i] << "\n"; //bad practice to place std::endl inside loops
        std::cout << arr[11] << std::endl;
    }
    std::array<int, 10> arr;
    arr.at(0) = 20;
    std::cout << arr.at(0) << std::endl;
    return 0;
}
