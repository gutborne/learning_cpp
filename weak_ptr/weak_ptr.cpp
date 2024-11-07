#include <iostream>
#include <memory>
void observe(std::weak_ptr<int> weak){
    std::cout << "Inside Observe Function: " << std::endl;
    if(std::shared_ptr<int> srd_ptr = weak.lock()){
        std::cout << "It's possible to check out std_ptr and this is: " << *srd_ptr  << std::endl; 
    }else{
        std::cout << "It isn't possible to check out std_ptr! " <<std::endl; 
        
    }
}
int main(){
    //weak_ptr is a smart pointer that holds a non-owing reference, that means, an in
    //direct reference to some object that is being pointed to some shared_ptr.
    std::cout << "                  Inside the first scope: " << std::endl;
    std::weak_ptr<int> weak_sp;
    {
        std::cout << "                  Inside the second scope: " << std::endl;
        std::cout << "weak_sp isn't initialized yet!" << std::endl;
        observe(weak_sp);
        std::shared_ptr<int> srd_ptr = std::make_shared<int>(34);
        weak_sp =  srd_ptr;
        observe(weak_sp);
        std::cout << "                  Inside the second scope: " << std::endl;
    }
    std::cout << "                  Inside the first scope: " << std::endl;
    std::cout << "Here the managed object was deleted already due to the end of the" 
    " second scope" << std::endl;
    observe(weak_sp);    
    return 0;
}
