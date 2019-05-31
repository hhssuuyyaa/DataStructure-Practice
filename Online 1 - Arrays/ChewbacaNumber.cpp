/*Chewbaca loves invrting number, he was given int x, Inverting digit t means replacing it
with (9-t). He needs to make smallest possible number out of given
Input - 4545            4371
Output - 4444           4321
*/
#include<iostream>
using namespace std;

int main(){
    char a[50];
    cin>>a;

    int i=0;
    if(a[i]=='9'){
        i++;
    }
    for(;a[i]!='\0';i++){
        int digit = a[i]-'0';       //Convert Char into digit
        if(digit>=5){
            digit = 9 - digit;
            a[i]=digit+'0';
        }
    }
    cout<<a<<endl;
    return 0;
}
