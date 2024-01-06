#include <iostream>
#include <string>

int main() {
    std::string str = ";1234d5";

    try {
        int intValue = std::stoi(str);
        std::cout << "Converted integer value: " << intValue << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid argument: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Out of range: " << e.what() << std::endl;
    }

    return 0;
}