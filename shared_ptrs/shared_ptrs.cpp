#include <iostream>
#include <memory>

class my_class{
    public:
        my_class(){
            std::cout << "class was created!" << std::endl;
        }
        ~my_class(){
            std::cout << "class was destroyed!" << std::endl;
        }
};
int main(){
    //Note: shated pointers are one more kind of smart pointers
    //1. help us to avoid calling new and delete
    //2. they will share the same resource, that is, the object created
    {
        std::shared_ptr<my_class> shared_ptr1 = std::make_shared<my_class>();
        std::shared_ptr<my_class> shared_ptr2 = shared_ptr1;
        //the resource will be deallocated just when the scope of the last shared_ptr
        //ends.
        {
            std::shared_ptr<my_class> shared_ptr3 = shared_ptr1;
            //we can use the function use_count to know, for the resource, how many pointers
            //are pointing to it, that means if such resource is still being shared between
            //pointers. That's called reference count!
            std::cout << "resource is being shared between: " <<shared_ptr1.use_count() << 
            " pointers" << std::endl;  
        }
        std::cout << "resource is being shared between: " <<shared_ptr1.use_count() << 
        " pointers" << std::endl;
    }  
    std::cout << "before this line, the resource was destroyed with the last"
    " remaining pointers" << std::endl;
    //td::shared_ptr<my_class[]> shared_ptr2 = std::make_shared<my_class[]>(10);
    return 0;
}
