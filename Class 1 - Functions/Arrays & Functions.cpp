#include <iostream>
using namespace std;

bool binary(int arr1[],int size,int element){
	int start = 0;
	int end = size-1;
	while(start<=end){
		int middle = (start+end)/2;
		if(arr1[middle]==element){
			return true;
		}
		if(element>arr1[middle]){
				start = middle+1;
		}else{
				end = middle-1;
		}
	}
	return false;
}

void pairss(int arr1[],int size, int num){
	int count = 0;
	for(int i=0;i<size-1;i++){
		for(int j=i+1;j<size-1;j++){
			if(num==arr1[i]+arr1[j]){
			count++;
		}
		}
	}
	cout<<count;
}

int main(){
	int arr[10]={10,20,30,40,50,60};
	int n;
	cin>>n;
	//cout<<binary(arr,6,n);
	pairss(arr,6,n);
}
