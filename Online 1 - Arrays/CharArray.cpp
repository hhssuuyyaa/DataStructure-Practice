#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[100] = {'a','b','c'};
    cout<<a<<endl;
    //char c[100];
    //cin>>c;
    //cout<<c<<endl;
    char b[100];
    cin.getline(b,100);
    cout<<b<<endl;
    string s;
    getline(cin,s);
    cout<<s<<endl;
}
