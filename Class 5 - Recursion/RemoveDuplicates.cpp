#include <iostream>
#include <string>
using namespace std;
void rec(string s, int i){
    if(s[i]=='\0'){
        return;
    }
   cout<<s[i];
    if(s[i]==s[i+1]){
        cout<<"*";
    }
    rec(s,i+1);
}
int main() {
    string s;
    cin>>s;
    rec(s, 0);
}
