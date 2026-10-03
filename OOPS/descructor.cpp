#include <iostream>
using namespace std;

class Student {
public:

    Student() {
        cout << "Constructor" << endl;
    }

    ~Student() {
        cout << "Destructor" << endl;
    }
};

int main() {

    Student s1;

    cout << "Inside main" << endl;

    Student s2;

    
    return 0;
}