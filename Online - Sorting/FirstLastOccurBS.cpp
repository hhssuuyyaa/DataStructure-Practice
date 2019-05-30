#include<iostream>
using namespace std;

int firstOccur(int a[],int n,int key){
	int s=0;
	int e=n-1;
	int mid;
	int ans=-1;
	while(e>=s){
		mid = (s+e)/2;
		if(a[mid] == key){
			ans = mid;
			e = mid-1;
		}
		if(a[mid]>key){
			e = mid-1;
		}
		if(a[mid]<key){
			s = mid+1;
		}
	}
	return ans;
}

int lastOccur(int a[],int n,int key){
	int s=0;
	int e=n-1;
	int mid;
	int ans=-1;
	while(e>=s){
		mid = (s+e)/2;
		if(a[mid] == key){
			ans = mid;
			s = mid+1;
		}
		if(a[mid]>key){
			e = mid-1;
		}
		if(a[mid]<key){
			s = mid+1;
		}
	}
	return ans;
}

int main(){
	int a[100] = {1,2,2,2,2,4,4};
	int n = 7;
	cout<<"First Occurence of 2 is "<<firstOccur(a,n,2)<<endl;
	cout<<"First Occurence of 4 is "<<firstOccur(a,n,4)<<endl;
	cout<<"Last Occurence of 2 is "<<lastOccur(a,n,2)<<endl;
	cout<<"Last Occurence of 4 is "<<lastOccur(a,n,4)<<endl;
	return 0;
}
