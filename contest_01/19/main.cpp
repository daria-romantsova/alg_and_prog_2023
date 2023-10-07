#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<std::string, int> words; 
    string word;

    while (cin >> word && word != "end")
    {
        ++words[word];
    }

    for (const auto &[word, count]: words)
    {
        if (count > 1) {
            cout << word << ' ';
        }
    }
    
    return 0;
}
