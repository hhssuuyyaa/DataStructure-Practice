#include<iostream>
using namespace std;

void printInInc(int n){
	if(n==1){
		cout<<1<<endl;
		return;
	}
	printInInc(n-1);
	cout<<n<<endl;
	return;
}

void printDec(int n){
	if(n==1){
		cout<<1<<endl;
		return;
	}
	cout<<n<<endl;
	printDec(n-1);
	return;
}

int main(){
	printInInc(5);
	printDec(5);
}
