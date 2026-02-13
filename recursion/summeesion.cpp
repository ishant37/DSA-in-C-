// #include <iostream>
// using namespace std;

// void summation(int n) {
//     int sum = 0;
//     for (int i = 1; i <= n; i++) {  // Start from 1 to include 'n' in sum
//         sum += i;
//     }
//     cout << "Sum of numbers from 1 to " << n << " is: " << sum << endl;
// }

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     summation(n);
//     return 0;
// }

//Parameterized

#include <iostream>
using namespace std;

int f(int n) {  // Change return type to 'int'
    if (n == 0) {
        return 0;  // Base case
    }
    return n + f(n - 1);  // Recursive case
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of numbers from 1 to " << n << " is: " << f(n) << endl;  // Print the result
    return 0;
}
