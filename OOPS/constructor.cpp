// #include <iostream>
// using namespace std;

// class Employee {
// public:
//     string name;
//     int salary;

//     // Constructor
//     Employee(string n, int s) {
//         name = n;
//         salary = s;
//     }

//     void display() {
//         cout << name << " earns " << salary << endl;
//     }
// };

// int main() {

//     Employee e1("A", 50000);
//     Employee e2("B", 70000);

//     e1.display();
//     e2.display();

//     return 0;
// }




#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string s, int a) {
        name = s;
        age = a;
    }

    // Copy Constructor
    Student(const Student &other) {
        name = other.name;
        age = other.age;
    }

    void display() {
        cout << name << " " << age << endl;
    }
};

int main() {

    Student s1("Ishaant", 21);

    Student s2 = s1;

    s1.display();
    s2.display();

    return 0;
}