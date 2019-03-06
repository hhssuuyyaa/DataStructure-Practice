#include<iostream>
using namespace std;

int main(){
	//Sieve method to solve prime
	int arr[20];
	for(int i=0;i<20;i++){
		arr[i]=1;
	}
	//checked till root n to reduce complexity
	for(int i=2;i*i<=20;i++){
		if(arr[i]==1){
			for(int j=2*i;j<20;j+=i){
				arr[j]=0;
			}
		}
	}
	for(int k=2;k<20;k++){
		if(arr[k]==1){
			cout<<k;
		}
	}
}
