#include <iostream>
#include <string>

std::string compressRLE(const std::string&amp; input) {
    std::string compressed;
    int count = 1;

    for (int i = 0; i < input.length(); i++) {
        // Если текущий символ совпадает с предыдущим, увеличиваем счетчик
        if (i > 0 && input[i] == input[i - 1]) {
            count++;
        } else {
            // Если не совпадает, добавляем предыдущий символ и его количество (если больше 1)
            if (i > 0) {
                compressed += input[i - 1];
                if (count > 1) {
                    compressed += std::to_string(count);
                }
            }
            count = 1;
        }
    }

    // Добавляем последний символ и его количество (если больше 1)
    compressed += input[input.length() - 1];
    if (count > 1) {
        compressed += std::to_string(count);
    }

    return compressed;
}

int main() {
    std::string input;
    std::cout << "";
    std::getline(std::cin, input);

    std::string compressed = compressRLE(input);
    
    std::cout << "" << compressed << std::endl;

    return 0;
}
