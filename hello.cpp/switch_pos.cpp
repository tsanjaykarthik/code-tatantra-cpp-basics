#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    switch ((num > 0) - (num < 0)) { 
        case 1:
            std::cout << "The number is Positive.\n";
            break;
        case -1:
            std::cout << "The number is Negative.\n";
            break;
        case 0:
            std::cout << "The number is Zero.\n";
            break;
        default:
            std::cout << "Unexpected input.\n";
    }

    return 0;
}
