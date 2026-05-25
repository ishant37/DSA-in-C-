// #include <iostream>
// using namespace std;

// int main() {
//     int a = 10;
//     int* p = &a;

//     cout << "a = " << a << endl;
//     cout << "&a = " << &a << endl;
//     cout << "p = " << p << endl;
//     cout << "*p = " << *p << endl;

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int a = 10;
//     int* p = &a;
//     int** q = &p;

//     cout << a << endl;
//     cout << *p << endl;
//     cout << **q << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {10, 20, 30};
//     int* p = arr;

//     cout << *p << endl;       // 10
//     cout << *(p + 1) << endl; // 20
//     cout << *(p + 2) << endl; // 30

//     return 0;
// }



// #include <iostream>
// using namespace std;

// void change(int* x) {
//     *x = 50;
// }

// int main() {
//     int a = 10;
//     change(&a);
//     cout << a << endl;   // 50
//     return 0;
// }


// #include <iostream>
// using namespace std;

// void greet() {
//     cout << "Hello" << endl;
// }

// int main() {
//     void (*ptr)() = greet;
//     ptr();
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    // 1. Single Variable Allocation
    int* p = new int(10); 
    cout << "Value: " << *p << endl;

    // Deleting the single variable
    delete p; 
    p = nullptr; // Resetting to avoid a dangling pointer

    // 2. Array Allocation
    int* arr = new int[5]{1, 2, 3, 4, 5};
    
    // Deleting the array (notice the square brackets)
    delete[] arr; 
    arr = nullptr;

    return 0;
}