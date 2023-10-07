#include <iostream>
#include <vector>
#include <string>

bool is_can_exit_from_maze(std::vector<std::string> maze, int row, int col) {
    if (maze[row][col] == '.') return false;
    if (maze[row][col] == '#') return false;
    if (maze[row][col] == 'E') return true;
    
    maze[row][col] = '.';
    
    return is_can_exit_from_maze(maze, row + 1, col) ||
           is_can_exit_from_maze(maze, row - 1, col) ||
           is_can_exit_from_maze(maze, row, col + 1) ||
           is_can_exit_from_maze(maze, row, col - 1);
}

int main(){
    int row, col, rows, cols;
    std::cin >> row >> col >> rows >> cols;
    std::cin.ignore(1); // Игнорируем перевод строки, застрявший в потоке ввода
    
    std::vector<std::string> maze(rows);
    for(auto& line : maze) std::getline(std::cin, line);
    
    std::cout << (is_can_exit_from_maze(maze, row, col) ? "YES" : "NO") << std::endl;
}
