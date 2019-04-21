#include <iostream>
using namespace std;
int count = 0;
//My Code -> Wrong
void stepss(int val){
    if(val == 1){
        cout<<count<<endl;
        count = 0;
        return;
    }
    if(val%3 == 1 ){
        val = val-1;

    }
    else if(val%3==0){
       val /= 3;

    }
    else if(val%2==0){
        val /= 2;
    }
    else{
        val -= 1;
    }
    count++;
    fred(val);
}
//Sir Code
int steps(int n){
    if(n==1){
        return 0;
    }
    int a = INT_MAX;
    int b = INT_MAX;
    int c = INT_MAX;
    if(n%3==0){
        a=steps(n/3)+1;
    }
    if(n%2==0){
        b=steps(n/2)+1;
    }
    c = steps(n-1)+1;
    return min(a,min(b,c));
}
int stepDP(int n){
    int arr[1000] = {-1,0,1,1};
    for(int i=4;i<=n;i++){
        int a = INT_MAX;
        int b = INT_MAX;
        int c = INT_MAX;
        if(i%3==0){
            a=arr[i/3]+1;
        }
        if(i%2==0){
            b=arr[i/2]+1;
        }
            c = arr[i-1]+1;
            arr[i] = min(a,min(b,c));
        }
        return arr[n];
}
int main(){
    int test;
    cin>>test;
    steps(test);

}
