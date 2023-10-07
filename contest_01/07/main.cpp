#include <iostream>

using namespace std;

int main()
{
    int a; int b;
    std::cin >> a>>b;
    if (a>b) {
        std::cout << a << std::endl;
    } else if (b>a) {
        std::cout << b << std::endl;
    }
}
