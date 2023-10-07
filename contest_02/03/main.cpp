#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

bool compare(const std::string& a, const std::string& b) {
    int count_a = std::count(a.begin(), a.end(), '1'); 
    int count_b = std::count(b.begin(), b.end(), '1'); 
    
    if (count_a == count_b) {
        return a < b;
    }
    else {
        return count_a > count_b;
    }
}

int main() {
    int count;
    std::cin >> count;
    
    std::vector<std::string> nums(count);
    for (auto& line : nums) std::cin >> line;
    
    std::sort(nums.begin(), nums.end(), compare);
    
    for (auto& line : nums) std::cout << line << ' ';
    
    return 0;
}
