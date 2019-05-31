#include<iostream>
using namespace std;

int main(){
    int arr[10];
    int count = 0;
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            count++;
        }
    }
    if(count==1){
        cout<<"Found";
    }else{
        cout<<"Not Found";
    }
}
