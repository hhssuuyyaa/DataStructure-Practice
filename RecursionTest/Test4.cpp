#include <iostream>
#define ll long long int
using namespace std;
int count = 0;
void check(int val, ll d, ll a, ll b){

if(val == d+a+b ||val==d-(a+b)|| val == (d+(a-b))|| val == (d-(a-b))|| val == (d + (b-a))|| val == (d - (b-a)) || val == d+a ||  val ==d+b || val == a+a || val == b+b || val == (d-a) || val == (d-b)){
    count++;
    }
}
int main() {
    ll a,b,d;
    cin>>a>>b>>d;
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        check(ar[i], d, a, b);
    }
    cout<<count;
}
