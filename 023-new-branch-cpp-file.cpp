#include <iostream>
#include <string>
#include <vector>

int main() {

    int var = 8;
    int* ptr = &var;

    std::cout << var << std::endl;

    *ptr = 18;

    std::cout << var << std::endl;

    char* buffer = new char[8]; // Pointer to the beginning of char array in the memory

    std::vector<std::string> list;
    list.push_back("aaa");
    std::cout << list[0] << std::endl;

    return 0;
}










