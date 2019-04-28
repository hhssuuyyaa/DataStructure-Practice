#include<iostream>
using namespace std;

void swapper(int* xp,int* yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int a[],int n){
	for(int i=0;i<n-1;i++){
		//Assume the current (ith) is minimum
		int minIndex = i;
		//Min Element in remaining part
		for(int j=i+1;j<n;j++){
			if(a[j]<a[minIndex]){
				//Whosoever element is minimum in current jth iteration will store in minIndex
				minIndex = j;
			}
		}
		//Then we finally swap the ith element with minElement and array is sorted till ith position
		swapper(&a[minIndex],&a[i]);
	}
}

int main(){
	int arr[10];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	selectionSort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
