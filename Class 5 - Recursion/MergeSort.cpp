#include<iostream>
using namespace std;

void merge(long long int arr[],long long int start1,long long int start2,long long int end){
	long long int k = start1;
	long long int m = start2-1;
	long long int n = end;
	long long int index=0;
	long long int temp[100];
	while(start1<=m && start2<=n){
		if(arr[start1]<arr[start2]){
			temp[index++]=arr[start1++];
		}else{
			temp[index++]=arr[start2++];
		}
	}
	while(start1<=m){
		temp[index++]=arr[start1++];
	}
	while(start2<=n){
		temp[index++]=arr[start2++];
	}
	for(int i=0;i<index;i++){
		arr[k+i]=temp[i];
	}
	return;
}

void mergeSort(long long int arr[],long long int start,long long int end){
	if(start>=end){
		return;
	}
	int mid = (start+end)/2;
	mergeSort(arr,start,mid);
	mergeSort(arr,mid+1,end);
	merge(arr,start,mid+1,end);
	return;
}

int main(){
	long long int n;
	long long int arr[1000000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	mergeSort(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
