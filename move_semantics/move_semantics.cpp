#include <iostream>

int main(){
    //note: basically std::move allows you to "steal" resources from others objects
    std::string string1 = "mateus";
    std::string string2;
    std::cout << "string1: " << string1 << std::endl;
    std::cout << "string2: " << string2 << std::endl;
    //WITH STD::MOVE
    //note that using this, the string2 steal the content of string1. One more thing
    //is using this method prevents the Copy constructor to be called, since there`s
    //no copy being made, what would be more slow.
    //GO BACK IN THIS TOPIC LATER
    string2 = std::move(string1);
    std::cout << "string1: " << string1 << std::endl;
    std::cout << "string2: " << string2 << std::endl;
}
