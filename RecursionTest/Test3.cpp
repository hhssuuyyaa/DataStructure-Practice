#include <iostream>
using namespace std;
int count = 0;
void fred(int val){
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
int main(){
    int test;
    cin>>test;
    fred(test);

}
