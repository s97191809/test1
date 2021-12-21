#include <iostream>
#include <string>

int main()
{
    // 이름을 물음
    std::cout << "Please enter your first name: ";

    std::string name;
    std::cin >> name;

    std::cout << "Hello, " << name << "!" << std::endl;
    
    return 0;
}