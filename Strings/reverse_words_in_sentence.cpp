// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
// getline(cin, s);

// stringstream ss(s);
// string word;
// vector<string> words;

// while(ss >> word)
//     words.push_back(word);

// reverse(words.begin(), words.end());

// for(string x : words)
//     cout << x << " ";
// }


//Largest word in string

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);

string word, longest = "";

while(ss >> word) {
    if(word.length() > longest.length())
        longest = word;
}

cout << longest;
}