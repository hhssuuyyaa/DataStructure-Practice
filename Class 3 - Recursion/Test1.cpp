#include <iostream>
using namespace std;
string output = "";
void solve(string s1, string s2, int i, int j){
    if(s1[i] == '\0' && s2[j] == '\0'){
        output[i+j] = '\0';
        cout<<output;
        output = "";
        return;
    }

    if(s1[i] == '\0'){
        output += s2[j];
        j++;
    }
     else if(s2[j] == '\0'){
        output += s1[i];
        i++;
    }
   else if(s1[i]<s2[j] && s1[i]!='\0'){
        output += s1[i];
        i++;
    }
    else {
        output += s2[j];
        j++;
    }
    solve(s1,s2,i,j);
}
int main() {
   int test;
   cin>>test;
   while(test--){
       string s1,s2;
       cin>>s1>>s2;
       solve(s1,s2,0,0);
       cout<<endl;
   }
}
