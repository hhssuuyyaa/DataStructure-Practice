#include <iostream>
using namespace std;

int factorial(int n){
    int fact;
    fact = 1;
    for(int i=n; i>=1; i--){
        fact *= i;
    }
    cout<<fact<<endl;
    return fact;
}

void nCr(int a, int b){
    int p = factorial(a);
    int q = factorial(b);
    int r = factorial(a-b);
    int final = p/(q*r);
    cout<<final;

}

int main() {
    int input;
    cin>>input;
    factorial(input);
    int a1,b1;
    cin>>a1>>b1;
    nCr(a1,b1);
}
