#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Struct untuk merepresentasikan matakuliah
struct Course {
    string name;
    int credits;
    float grade;
};

// Class untuk merepresentasikan mahasiswa
class Student {
private:
    string name;
    int id;
    vector<Course> courses;

public:
    // Constructor
    Student(string n, int i) : name(n), id(i) {}

    // Method untuk menambahkan matakuliah yang diambil oleh mahasiswa
    void addCourse(string courseName, int credits, float grade) {
        Course c = {courseName, credits, grade};
        courses.push_back(c);
    }

    // Method untuk menghitung total skor kredit yang diambil oleh mahasiswa
    int totalCredits() {
        int total = 0;
        for (Course c : courses) {
            total += c.credits;
        }
        return total;
    }

    // Method untuk menghitung IPK (Indeks Prestasi Kumulatif) mahasiswa
    float calculateGPA() {
        float totalPoints = 0.0;
        int totalCredits = 0;
        for (Course c : courses) {
            totalPoints += c.grade * c.credits;
            totalCredits += c.credits;
        }
        return totalPoints / totalCredits;
    }

    // Method untuk menampilkan informasi mahasiswa dan matakuliah yang diambil
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Courses:" << endl;
        for (Course c : courses) {
            cout << "- " << c.name << " (" << c.credits << " credits), Grade: " << c.grade << endl;
        }
        cout << "Total Credits: " << totalCredits() << endl;
        cout << "GPA: " << calculateGPA() << endl;
    }
};

int main() {
    // Membuat objek mahasiswa
    Student student("Sudol", 123456);

    // Menambahkan matakuliah yang diambil oleh mahasiswa
    student.addCourse("Matematika", 4, 3.5);
    student.addCourse("Fisika", 3, 3.0);
    student.addCourse("Komputer", 3, 4.0);

    // Menampilkan informasi mahasiswa dan matakuliah yang diambil
    student.displayInfo();

    return 0;
}
