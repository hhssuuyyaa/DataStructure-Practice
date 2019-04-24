#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int currentSum=0;
    int maxSum = 0;
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        currentSum += arr[i];
        if(currentSum < 0){
            currentSum = 0;
        }
        maxSum = max(currentSum,maxSum);
    }
    cout<<"Max Sum of Subarray is: "<<maxSum;
}
