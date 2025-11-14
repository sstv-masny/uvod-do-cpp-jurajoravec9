
#include <iostream>
#include <vector>
int main() {
    char number[] = {'1', '2', '3', '4', '5', '1', '2', '3', '4', '5'};

    std::cout << sizeof(number) << '\n';

    for (int i = 0; i < 10; i++) {
        std::cout << number[i] << '\n';
    }

    return 0;
}
