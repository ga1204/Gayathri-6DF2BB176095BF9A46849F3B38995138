#include <iostream>
#include <vector>
#include <algorithm>

// Define the Student structure
struct Student {
    std::string name;
    std::string roll_number;
    float cgpa;
};

// Custom comparison function for sorting students by CGPA in descending order
bool compareStudentsByCGPA(const Student &a, const Student &b) {
    return a.cgpa > b.cgpa;
}

// Function to sort a list of students by CGPA in descending order
void sort_students(std::vector<Student> &students) {
    std::sort(students.begin(), students.end(), compareStudentsByCGPA);
}

int main() {
    // Test the sort_students function with a list of students
    std::vector<Student> students = {
        {"Alice", "A001", 3.8},
        {"Bob", "B002", 3.6},
        {"Charlie", "C003", 3.9},
        {"David", "D004", 3.7}
    };

    // Call the sorting function
    sort_students(students);

    // Print the sorted list of students
    std::cout << "Sorted List of Students by CGPA (Descending Order):\n";
    for (const Student &student : students) {
        std::cout << "Name: " << student.name << ", Roll Number: " << student.roll_number
                  << ", CGPA: " << student.cgpa << std::endl;
    }

    return 0;
}


