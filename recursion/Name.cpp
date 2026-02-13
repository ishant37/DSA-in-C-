// #include<iostream>
// using namespace std;
// void names(const string& name,int n ){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<name<<" "<<endl;
//     }
    
// }
// int main()
// {
//     int n;
//     string name="ishant";
//     names(name,5);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void no(int n ){
//     for (int i = 1; i < n+1; i++)
//     {
//         cout<<i<<" "<<endl;
//     }
    
// }
// int main()
// {
//     int n;
//     cout<<"write:";
//     cin>>n;
//     no(n);
//     return 0;
// }
#include<iostream>
using namespace std;
void no(int n){
    for (int i = n; i >=1; i--)
    {
        cout<<i<<" "<<endl;
    }
    
}
int main()
{
    int n;
    cout<<"write:";
    cin>>n;
    no(n);
    return 0;
}