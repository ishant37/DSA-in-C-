// #include<iostream>
// using namespace std;
// int main(){
//     int rev=0,rem=0,num,temp;
//     cout<<"Ente the number";
//     cin>>num;

//     temp=num;
//     while(temp>0){
//         rem=temp%10;
//         rev=rev*10+rem;
//         temp/=10;
//     }

//     if(num==rev) cout<<num<<" is palidnrome";
//     else cout<<"Not";

// }

#include <iostream>
using namespace std;

bool isPalindrome(int n) {

    // Convert the absolute value
    // of number to string
    string s = to_string(abs(n));
	int len = s.length();

    for (int i = 0; i < len / 2; i++) {

        // Comparing i th character from starting
        //  and len-i th character from end
        if (s[i] != s[len - i - 1])
            return false;
    }
    return true;
}

int main() {
    int n = 12321;
    if (isPalindrome(n) == 1) {
        cout << "True";
    }
    else {
        cout << "False";
    }
    return 0;
}