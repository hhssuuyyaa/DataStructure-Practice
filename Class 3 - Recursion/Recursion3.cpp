#include<iostream>
using namespace std;

int mul(int a,int b){
	if(a==0||b==0){
		return 0;
	}
	return mul(a-1,b) + b;
}

void bubbleSort(int arr[],int n,int i){
	if(n==0||n==1){
		return;
	}
	if(i==n-1){
		bubbleSort(arr,n-1,0);
		return;
	}
	if(arr[i]>arr[i+1]){
		int temp = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = temp;
	}
	bubbleSort(arr,n,i+1);
	//this returns is a good habit because function is completing and it must return to previous callee
	return;
}

bool binarySearch(int arr1[],int start,int end,int k){
	if(start>end){
		//if element not found
		return false;
	}
	int mid = (start+end)/2;
	if(arr1[mid]==k){
		return true;
	}
	if(arr1[mid]>k){
		return binarySearch(arr1,start,mid-1,k);
	}else{
		return binarySearch(arr1,mid+1,end,k);
	}
}

int main(){
	int a=10;
	int b=2;
	int arr[10]={7,2,4,1,6};
	int arr1[10]={1,2,3,4,5};
	cout<<mul(a,b)<<endl;
	bubbleSort(arr,5,0);
	for(int i=0;i<5;i++){
		cout<<arr[i];
	}
	cout<<endl<<binarySearch(arr1,0,4,4);
}
