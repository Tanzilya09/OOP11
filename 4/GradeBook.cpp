#include "GradeBook.h"
#include <iostream>
#include <numeric>
using namespace std;

GradeBook::GradeBook(const string& name) : studentName(name) {}

void GradeBook::addGrade(int grade) {
    grades.push_back(grade);
}

void GradeBook::displayGrades() const {
    cout << "ќценки студента " << studentName << ": ";
    for (int grade : grades) {
        cout << grade << " ";
    }
    cout << endl;
}

double GradeBook::calculateAverage() const {
    if (grades.empty()) {
        return 0.0;
    }
    double sum = accumulate(grades.begin(), grades.end(), 0.0);
    return sum / grades.size();
}
