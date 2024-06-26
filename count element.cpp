#include <iostream>
#include <string>

int main() {
    std::string str;
	    std::cout << "Enter a string: ";
    std::getline(std::cin, str); 
    
    int count = str.length(); 
        std::cout << "Number of elements in the string: " << count << std::endl;
    
    return 0;
}
