#include <iostream>
#include <string>
using namespace std;

void stringtoInt(char string[]){
    int n,j=1,m=0,k=0;
    while (string[k] != '\0') 
    { 
        ++k; 
    } 
    for(int i=k-1;i>=0;i--){
        n=string[i];
        n=n-48;
        m=m+(n*j);
        j=j*10;
    }
    cout<<m;
}

int main() {
    char string[100];
    cin>>string;
    stringtoInt(string);
}

