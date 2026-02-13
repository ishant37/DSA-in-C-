#include<iostream>
#include<vector>
using namespace std;
class Stack{
    vector<int> v;
    public:
    void push(int val){
        v.push_back(val);
    };

    void pop(){
        v.pop_back();
    }

    int top(){
       return v[v.size()-1];
    }

    bool isEmpty(){
        return v.size() == 0;
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    cout << "Top element: " << s.top() << endl; // Should print 20
    s.pop();
    cout << "Top element after pop: " << s.top() << endl; // Should print 10
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl; // Should print No
    return 0;
}