#include<iostream>
using namespace std;

void printSubSequence(int input[], int output[], int n, int inputIndex, int outputIndex){
	if(inputIndex>=n){
		for(int i=0;i<outputIndex;i++){
			cout<<output[i];
		}
		cout<<endl;
		return;
	}
	output[outputIndex]=input[inputIndex];
	printSubSequence(input,output,n,inputIndex+1,outputIndex+1);
	printSubSequence(input,output,n,inputIndex+1,outputIndex);
	return;
}
int main(){
	int arr[20]={1,2,3};
	int arr1[20];
	printSubSequence(arr,arr1,3,0,0);
}
