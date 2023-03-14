#include<bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    string className;
    float mathGrade;
    float physicalGrade;
};
vector<Student> studentList;

void add(vector<Student>& studentList) {
    Student newStudent;
    cout << "Enter  name: ";
    getline(cin, newStudent.name);
    cout << "Enter  class: ";
    getline(cin, newStudent.className);
    cout << "Enter  point math : ";
    cin >> newStudent.mathGrade;
    cout << "Enter point physical : ";
    cin >> newStudent.physicalGrade;
    cin.ignore();

    studentList.push_back(newStudent);
}

void Search(vector<Student>& studentList) {
    string name;
    cout << "Enter student name: ";
    getline(cin, name);

    bool found = false;
    for (const auto& student : studentList) {
        if (student.name == name) {
            cout << "Name: " << student.name << endl;
            cout << "Class: " << student.className << endl;
            cout << "point Math : " << student.mathGrade << endl;
            cout << "point Physical : " << student.physicalGrade << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student not found!" << endl;
    }
}

void edit(vector<Student>& studentList) {
    string name;
    cout << "Enter student name: ";
    getline(cin, name);

    bool found = false;
    for (auto& student : studentList) {
        if (student.name == name) {
            cout << "Name: " << student.name << endl;
            cout << "Class: " << student.className << endl;
            cout << "point Math : " << student.mathGrade << endl;
            cout << "point Physical : " << student.physicalGrade << endl;

            cout << "Enter new class: ";
            getline(cin, student.className);
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student not found!" << endl;
    }
}

int main() {
    vector<Student> studentList;
    int n;

    do {
        cout << endl;
        cout << "1. Add a new student" << endl;
        cout << "2. Search for a student by name" << endl;
        cout << "3. Edit class of a student by name" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> n;
        cin.ignore();

        switch (n) {
        case 1:
            add(studentList);
            break;
        case 2:
            Search(studentList);
            break;
        case 3:
            edit(studentList);
            break;
        case 4:
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (n != 4);

    return 0;
}



