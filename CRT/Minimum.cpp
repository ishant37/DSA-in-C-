#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            // Find the layer number
            int layer = min(min(i, j), min(m - 1 - i, n - 1 - j));

            if (layer % 2 == 0)
                cout << "1 ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}