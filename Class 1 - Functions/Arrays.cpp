#include <iostream>
using namespace std;

void pairr(int arr[], int n, int number){
	int count = 0;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n;j++){
			if(arr[i]+arr[j]==number)
			count++;
		}
	}
	cout<<count;
}

bool binarySearch(int arr[],int n, int element){
	int start = 0;
	int end = n-1;
	while(start<=end){
		int mid = (start+end)/2;
		if(arr[mid]==element){
			return true;
		}	
		if(arr[mid]>element){
			end = mid-1;
		}else{
			start = mid+1;
		}
	}
	return false;
}

int main(){
	int arr[10]={2,4,6,8,10};
	int number;
	cin>>number;
	cout<<binarySearch(arr,5,number)<<endl;
	pairr(arr,5,number);
}
