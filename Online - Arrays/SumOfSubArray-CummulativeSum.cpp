#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int cs[100] = {0};
    int currentSum;
    int maximumSum=0;

    //Size of array
    int n;
    cin>>n;

    cin>>arr[0];
    cs[0] = arr[0];

    for(int i=1;i<n;i++){
        cin>>arr[i];
        cs[i] = cs[i-1]+arr[i];
        cout<<cs[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            currentSum = 0;
            currentSum = cs[j]-cs[i-1];
            cout<<currentSum<<" ";
            if(currentSum>maximumSum){
                maximumSum=currentSum;
            }
        }
    }
    cout<<maximumSum;
}
