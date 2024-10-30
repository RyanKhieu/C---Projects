#include <iostream>
#include <string>

int in;
std::string password1;
std::string password2;

int main() {
    for (int i = 2; i <= 10; i += 2) {
        std::cout << i << std::endl;
    }

    std::cout << std::endl;

    for (int i = 10; i >= 2; i -= 2) {
        std::cout << i << std::endl;
    }

    while (in >= 0) {
        std::cout << "Enter a number: ";
        std::cin >> in;
    }

    std::cout << std::endl;

    do {
        std::cout << "Enter what you want your password to be: ";
        std::cin >> password1;
        std::cout << "Enter your password again: ";
        std::cin >> password2;
    } while (password1 != password2);
    return 0;
}

