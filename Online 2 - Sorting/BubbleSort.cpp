#include<iostream>
using namespace std;

void swapper(int* xp,int* yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[10],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swapper(&arr[j],&arr[j+1]);
			}
		}
	}
}

int main(){
	int arr[10];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	bubbleSort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
