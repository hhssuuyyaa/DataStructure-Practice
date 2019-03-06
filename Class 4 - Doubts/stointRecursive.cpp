#include<iostream>
#include<string.h>
using namespace std;

void stringInt(char string[],int size,int sum,int j){
	int n;
	if(size==1){
		n=string[0]-48;
		n=n*j;
		sum=sum+n;
		cout<<sum;
		return;
	}
	n=string[size-1]-48;
	n=n*j;
	sum=sum+n;
	stringInt(string,size-1,sum,j*10);
	return;
}

int main(){
	char string[100];
	cin>>string;
	int s = strlen(string);
	stringInt(string,s,0,1);
}
