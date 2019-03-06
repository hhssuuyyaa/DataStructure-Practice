#include<iostream>
using namespace std;

void oddEven(int n,int k,int count){
	if(n==0||n==-1||n>k){
		return;
	}
	if(count==0&&n%2==0){
		n=n-1;
	}
	if(n%2!=0){
		cout<<n<<endl;
		count++;
		if(n!=1){
			oddEven(n-2,k,count);
			return;
		}	
	}
	if(n==1){
		n++;
		if(count!=1){
		count++;
		cout<<n<<endl;
		oddEven(n+2,k,count);
	}
		return;
	}
	if(n%2==0){
		cout<<n<<endl;
		oddEven(n+2,k,count);
	}
}

int main(){
	int n;
	cin>>n;
	oddEven(n,n,0);	
}
