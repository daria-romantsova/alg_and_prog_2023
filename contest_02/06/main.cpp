#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Student {
    std::string name;
    std::string group;
};

// 
Student make_student(std::string s) {
    Student answer;

    bool started_group = false;
    for (int i = 0; i < s.size(); i++) {
        char c = s.at(i);
        if (started_group) {
            answer.group.append(1,c);
        } else if (c==';') {
            started_group = true;
        } else {
            answer.name.append(1,c);
        }
    }

    return answer;
}

bool is_upper(Student x, Student y) {
    if (x.group < y.group) {
        return true;
    } else if (x.group == y.group) {
        return x.name < y.name;
    }
    return false;
}

void print(std::vector<Student> students) {
    if (students.size() == 0) {
        std::cout << "Empty list!" << std::endl;
        return;
    }

    std::string prev = "";
    for (auto& s : students) {
        if (s.group != prev) {
            prev = s.group;
            std::cout << s.group << std::endl;
        }
        std::cout << "- " << s.name << std::endl;
    }
}
//
int main()
{
    int count;
    std::cin >> count;
    std::cin.ignore(1);  // Убираем из потока символ \n для корректной работы getline
    
    std::vector<Student> students(count);
    for(auto& student: students) {
        std::string line;
        std::getline(std::cin, line);
        student = make_student(line);
    }
    
    std::sort(students.begin(), students.end(), is_upper);
    
    print(students);
}
