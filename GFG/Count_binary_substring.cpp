#include <bits/stdc++.h>
using namespace std;

// Function to find the count of substrings with equal no.
// of consecutive 0's and 1's
int countSubstring(string &S, int &n)
{
    int ans = 0;
    int i = 0,j=0;
    while (i < n)
    {
        inn count0 = 0;
        int count1 = 0;
        if (S[i] == '0')
        {
            while (i < n && S[i] == '0')
            {
                count0++, i++;
            }
            int j=i;
            while(j<n && S[j]=='1'){
                count1++,j++;
            }
        }else{
            while(j<n && S[j]=='0'){
                count0++,
                j++;
            }
            while(j<n && S[j]=='1'){
                count1++,j++;
            }
        }
        ans=max(count1,count0);
    }
    return ans;
}

// Driver code
int main()
{
    string S = "0001110010";
    int n = S.length();

    // Function to print the count of substrings
    cout << countSubstring(S, n);
    return 0;
}
