#include<iostream>
using namespace std;

void printNUmDigit(int n){
switch(n){
    case 0:
        cout<<"zero"<<endl;
        break;
    case 1:
        cout<<"one"<<endl;
        break;
    case 2:
        cout<<"two"<<endl;
        break;
    case 3:
        cout<<"three"<<endl;
        break;
    default:
        cout<<"does not exits"<<endl;
        break;
}
return;
}

void intToALpha(int n){
    if(n/10<1){
        printNUmDigit(n);
        return;
    }
    intToALpha(n/10);
    printNUmDigit(n%10);
    return;
}

int main(){
intToALpha(123);

}
