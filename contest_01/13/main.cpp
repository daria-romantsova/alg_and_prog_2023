#include <iostream>
using namespace std;

int main()
{
    int n, i, m, j, t, k;
    std::cin >> n;
    m = 2; // максимальный размер изначально
    i = 1; // текущее выводимое число
    j = 1; // размер строки
    t = 1; // определяем направление (увелич или уменьш)
    k = 1; // до какого размера увеличиваем
    while (i<=n) {
        std::cout << i << " ";
        if (j==k) { 
            std::cout << endl; 
            j = 0;
            if (k==m) { 
                t = 0;
                m++;
            }
            if (k==1) {
                t = 1;
            }
            if (t==1) { 
                k++; 
            }
            if (t==0) { 
                k--; 
            }
        }
        j++; 
        i++; 
    }
    return 0;
}
