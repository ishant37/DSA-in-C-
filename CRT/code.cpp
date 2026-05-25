#include <iostream>
using namespace std;

int main() {
    int age;
    string name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter full name: ";
    getline(cin, name);  // ❌ Issue: gets skipped

    cout << "Name: " << name << endl;

    return 0;
}