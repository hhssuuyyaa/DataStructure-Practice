#include<iostream>
using namespace std;

void waveSort(int a[],int n){
	for(int i=0;i<n;i+=2){
		if(i>0 && a[i-1]>a[i]){
			swap(a[i],a[i-1]);
		}
		if(i<=n-2 && a[i+1]>a[i]){
			swap(a[i+1],a[i]);
		}
	}
	return;
}

int main(){
	int arr[10];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	waveSort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
