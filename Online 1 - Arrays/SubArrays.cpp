#include<iostream>
using namespace std;

int main(){
    int arr[100];

    //Size of array
    int n;
    cin>>n;

    //Input array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //SubArray
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<j;k++){
                cout<<arr[k];
            }
            cout<<endl;
        }
    }
}
