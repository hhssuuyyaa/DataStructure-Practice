#include<iostream>
using namespace std;

void insertionSort(int a[],int n){
	for(int i=1;i<n;i++){
		int j = i-1;
		int temp = a[i];
		while(j>=0 && a[j]>temp){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}

int main(){
	int arr[10];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	insertionSort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
