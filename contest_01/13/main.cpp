#include <iostream>
using namespace std;

int main()
{
    int n, i, m, j, t, k;
    std::cin >> n;
    m = 2; 
    i = 1; 
    j = 1; 
    t = 1; 
    k = 1; 
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
