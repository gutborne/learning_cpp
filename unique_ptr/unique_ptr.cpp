#include <iostream>
#include <memory>
class my_class{
    public:
        int my_variable;
        //constructor called when creation
        my_class(){
            std::cout << "my_class was created" << std::endl;
        }
        //destructor called when leaves scope
        ~my_class(){
            std::cout << "class destroyed" << std::endl;
        }
};
int main(){
    //unique_ptr is a scoped smart pointer
    /*Note: regarding the raw pointers allows sharing the address of it points to,
    this can lead to some problems like ownership(that means any pointer that points 
    to the same place has the power to delete memory), forget to deallocate or 
    deallocate twice.*/
    //Unique_ptr will address these problems
    //my_class first_instance;
    std::cout << "unique_ptr pointing to a user defined class" << std::endl;
    std::unique_ptr<my_class> firstInstance = std::unique_ptr<my_class>(new my_class);
    std::cout << "firsInstance: " << firstInstance.get() << std::endl;
    std::cout << "unique_ptr pointing to a user defined class" << std::endl;
    //delete firstInstance; //whe dont have to worry about with deallocating bc
    //unique_ptr is a scoped pointer. So, before it leaves scope, it deallocates auto
    //matically
    //for arrays, the syntax bellow is the most preferable
    std::unique_ptr<my_class[]> secondInstance = std::make_unique<my_class[]>(10);
    for(int i = 0; i < 10; i++){
        secondInstance[i].my_variable = i+2;
    }
    for(int i=0; i < 10; i++){
        std::cout << secondInstance[i].my_variable << " ";
    }
    std::cout << std::endl;
    std::unique_ptr<int[]> thirdInstance = std::make_unique<int[]>(10);
    for(int i=0; i < 10; i++){
        thirdInstance[i] = i;
    }
    for(int i=0; i < 10; i++){
        std::cout << thirdInstance[i] << " ";
    }
    std::cout << std::endl;
    //but, for arrays, we have the syntax bellow. Note that this syntax is a little
    //bit complex than the previous using make::unique
    std::unique_ptr<int[]> my_array1 = std::unique_ptr<int[]>(new int[10]);
    for(int i = 0; i < 10; i++){
        my_array1[i] = i+1;
        std::cout << my_array1[i] << " ";
    }
    std::cout << std::endl;
    //We cannot share the same memory region, that means, no copy constructor being
    //used:
    //std::unique_ptr<my_class> thirdInstance = firstInstance; it doesn't work
    //but we can move some resource from another object
    std::unique_ptr<my_class> fourthInstance = std::move(firstInstance);
    std::cout << "fourthInstance: " << fourthInstance.get() << std::endl;
    return 0;
}//here is when the destructor is called
