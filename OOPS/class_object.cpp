#include <iostream>
using namespace std;

class Student {
    string name;
    int age;
public:

    void fucking() {
        cout << name << " is fucking." << endl;
    }

    void study(){
        cout<<name<<" is studying."<<endl;
    }

    void sleep(){
        cout<<name<<" is sleeping."<<endl;
    }
};

int main() {

    Student s1;
    Student s2;
    s1.name = "Ishaant";
    s1.age = 21;

    s2.name = "Rohit";
    s2.age = 22;
    // cout << s1.name << endl;
    // cout << s1.age << endl;
    // cout << s2.name << endl;
    // cout << s2.age << endl;

    s1.fucking();
    s2.fucking();

    s1.sleep();
    return 0;
}