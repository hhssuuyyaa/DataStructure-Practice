#include<iostream>
using namespace std;

bool checker(int arr[],int n,int i){
	//if 7 not found
	if(i==n){
		return false;
	}
	//if 7 found
	if(arr[i]==7){
		return true;
	}
	bool right = checker(arr,n,i+1);
	if(right){
		return true;
	}
	return false;
}

//returns first index of seven starting from i
int firstIndex(int arr[],int n,int i){
	if(i==n){
		//array doesn't exist
		return -1;	//signal
	}
	if(arr[i]==7){
		return i;
	}
	int right = firstIndex(arr,n,i+1);
	if(right!=-1){
		return right;
	}
	return -1;
}

int lastIndex(int arr[],int n,int i){
	if(i==n){
		return -1;
	}
	int right = lastIndex(arr,n,i+1);
	if(right!=-1){
		return right;
	}
	if(arr[i]==7){
		return i;
	}
	return -1;
}

void allIndex)(int arr[],int n,int i){
	if(i==n){
		return;
	}
	if(arr[i]==7){
		cout<<i<<" ";
	}
	allIndex(arr,n,i+1);
	return;
}

int main(){
	int n[10] = {1,2,3,6,7,8};
	cout<<checker(n,6,0);
}
