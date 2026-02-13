#include <bits/stdc++.h>
using namespace std;

// Function to count the minimum changes
// to make the 2 strings anagram
int minSteps(string s, string t)
{
    unordered_map<char, int> a;

    // For counting the steps to be changed
    int count = 0;
    for (auto i : s) {

        // Increasing the count if the no.
        // is present
        a[i]++;
    }
    for (auto j : t) {

        // Checking if the element of s is
        // present in t or not
        if (a[j] > 0) {

            // If present then decrease the
            // no. in map by 1
            a[j]--;
        }
        else {

            // If not present
            // increase count by 1
            count++;
        }
    }
    cout << count;

    // Return count
    return count;
}

// Driver Code
int main()
{
    string s = "ddcf", t = "cedk";

    minSteps(s, t);

    return 0;
}