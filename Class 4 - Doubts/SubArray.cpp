#include<iostream>
using namespace std;

int main(){
	int sum=0;
	int j=0;
	int arr[10]={1,4,20,3,10,5};
	for(int i=0;i<6;i++){
		sum = sum+arr[i];
		while(sum>33 && j<i){
			sum = sum-arr[j];
			j++;
			if(sum==33){
				cout<<"Found";
			}
		}
	}
}
