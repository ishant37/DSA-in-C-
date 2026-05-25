#include<iostream>
using namespace std;
void pattern1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern2(int n){
  for (int i = n; i >= 1; i--) {
for (int j = i; j >= 1; j--)
{
cout << j << " ";
}
cout << endl;
}
}
void pattern3(int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<=2*i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n;k++){
           if(k<=n-i){
               cout<<"  ";
           }
           else{
               cout<<k<<" ";
           }
        }        cout<<endl;
    }
}
void pattern5(int n){
    for (int i = 1; i <= n; i++) {
for (int k = 1; k <= n- i;k++)
cout << " ";
for (int j = 1; j <= i*2+1; j++)
cout << j<<" ";
cout << endl;
}
}
int main(){
    int n;
    cin>>n;
    pattern5(n);
    return 0;
}


// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() {
// int n,m;
// cout << "Enter no of rows:";
// cin >> n;
// int a = (n*n+n)/2;
// for (int i = 1; i <= n; i++) {
// for (int j = 1; j <= i; j++,a--)
// {
// cout.width(3);
// cout << a;
// }
// cout << endl;
// }
// return 0;
// }