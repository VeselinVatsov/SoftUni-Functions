// Write a function that receives a grade between 2.00 and 6.00 and prints the corresponding grade in words

#include <iostream>
#include <string>

void printGradeInWords(double grade) {
    std::string gradeInWords;

    if (grade >= 2.00 && grade <= 2.99) {
        gradeInWords = "Fail";
    }
    else if (grade >= 3.00 && grade <= 3.49) {
        gradeInWords = "Poor";
    }
    else if (grade >= 3.50 && grade <= 4.49) {
        gradeInWords = "Good";
    }
    else if (grade >= 4.50 && grade <= 5.49) {
        gradeInWords = "Very good";
    }
    else if (grade >= 5.50 && grade <= 6.00) {
        gradeInWords = "Excellent";
    }
    else {
        std::cout << "Invalid grade!" << std::endl;
    }

    std::cout << gradeInWords;
}

int main() {
    double grade;
    std::cin >> grade;

    printGradeInWords(grade);

    return 0;
}
