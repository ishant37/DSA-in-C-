// #include <iostream>
// using namespace std;

// class Shape {
// public:
//     // virtual keyword enables dynamic binding
//     virtual void draw() { cout << "S "; }
// };

// class Circle : public Shape {
// public:
//     void draw() { cout << "C "; }
// };

// class Rect : public Shape {
// public:
//     void draw() { cout << "R "; }
// };

// int main() {
//     Shape *arr[3];      // Array of Shape pointers
//     Shape s; 
//     Circle c; 
//     Rect r;

//     // Assigning addresses of different objects to the Shape pointers
//     arr[0] = &s; 
//     arr[1] = &c; 
//     arr[2] = &r;

//     for (int i = 0; i < 3; i++)
//         arr[i]->draw(); // Calls the version of draw() based on actual object type

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class A {
// public:
//     A(int x) { cout << "A" << x << " "; }
// };

// class B {
// public:
//     B(int x) { cout << "B" << x << " "; }
// };

// class C : public B, public A {
// public:
//     // Constructor of C calls B and A in the list
//     C() : B(2), A(1) { cout << "C"; }
// };

// int main() {
//     C obj;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class A {
// protected:
//     int x;
// public:
//     A() : x(100) {} // Constructor initializes x to 100
// };

// class B : public A {
// public:
//     void setX(int v) { x = v; } // Inherits x from A
// };

// class C : public B {
// public:
//     void show() { cout << x; } // Inherits x via B
// };

// int main() {
//     C obj;          // Creates object of derived class C
//     obj.setX(42);   // Calls method in B to change x to 42
//     obj.show();     // Calls method in C to print x
//     return 0;
// }



#include <iostream>
using namespace std;

class Base {
public:
    void show() { cout << "Base"; }
};

class Derived : public Base {
public:
    void show() { cout << "Derived"; }
};

int main() {
    Base *p;        // Pointer of type Base
    Derived d;      // Object of type Derived
    p = &d;         // Pointer p points to Derived object d
    
    p->show();      // Which show() gets called?
    
    return 0;
}