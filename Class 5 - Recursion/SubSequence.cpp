#include<iostream>
#include<cstring>
using namespace std;

void printSubSequence(char input[], char output[], int n, int inputIndex, int outputIndex,int &count){
	if(inputIndex>=n){
		for(int i=0;i<outputIndex;i++){
			cout<<output[i];
		}
		count++;
		cout<<" ";
		return;
	}
	output[outputIndex]=input[inputIndex];
	printSubSequence(input,output,n,inputIndex+1,outputIndex+1,count);
	printSubSequence(input,output,n,inputIndex+1,outputIndex,count);
	return;
}
int main(){
	char arr[120];
	char arr1[120];
	int count = 0;
	int l = strlen(arr);
	cin>>arr;
	printSubSequence(arr,arr1,l+1,0,0,count);
	cout<<endl;
	cout<<count;
}
