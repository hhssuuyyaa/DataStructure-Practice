#include<iostream>
#include<cstring>
using namespace std;

void printSubSequence(char input[], char output[], int n, int inputIndex, int outputIndex, int &count){
	if(inputIndex>=n){
		return;
	}
    if(count==0){
        cout<<endl;
    }
    output[outputIndex]=input[inputIndex];
    for(int i=0;i<=outputIndex;i++){
			cout<<output[i];
		}
        count++;
        cout<<endl;
    printSubSequence(input,output,n,inputIndex+1,outputIndex+1,count);
    printSubSequence(input,output,n,inputIndex+1,outputIndex,count);	
	return;
}
int main(){
	char arr[120];
	char arr1[120];
    int test;
    cin>>test;
    while(test--){
	cin>>arr;
    int l = strlen(arr);
    int count = 0;
    printSubSequence(arr,arr1,l,0,0,count);
    }
}
