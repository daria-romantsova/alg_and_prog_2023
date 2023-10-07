#include <iostream>

using namespace std;

int main()
{
    int A; int B; int C; int r1; int r2;
    std::cin >> A>>B>>C;
    
    if (A>B) {
        r1 = A-B;
    } else if (B>A) {
        r1 = B-A;
    }
    if (A>C) {
        r2 = A-C;
    } else if (C>A) {
        r2 = C-A;
    }
    
    if (r1>r2) {
        std::cout << "C" << " ";
        std::cout << r2;
    } else if (r2>r1) {
        std::cout << "B" << " ";
        std::cout << r1;
    }
}
