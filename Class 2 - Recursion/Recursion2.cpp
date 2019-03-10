#include<iostream>
using namespace std;

int powers(int x, int n){
	if(n!=0){
		return (x*powers(x,n-1));
	}else
	return 1;
}

int main(){
	int x=2;
	int n=3;
	cout<<powers(x,n);
}
