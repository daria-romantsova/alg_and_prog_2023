#include <iostream>
#include <string>
#include <algorithm>

int main() {
    // Ввод двух чисел
    std::string num1, num2;
    std::cin >> num1 >> num2;

    // Сортируем цифры в числах
    std::sort(num1.begin(), num1.end());
    std::sort(num2.begin(), num2.end());

    // Проверяем, является ли одно число перестановкой другого
    if (num1 == num2) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
